
#include "scheduler.h"

typedef struct
{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;

	uint32_t TaskID;
} sTask;


#define SCH_MAX_TASKS 10
#define NO_TASK_ID 0
sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void)
{
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++)
	{
		SCH_Delete_Task(i);
	}
	// Reset the global error variable.

}

void SCH_Update(void)
{
unsigned char Index;
	for (Index = 0; Index < SCH_MAX_TASKS; Index++)
	{
		// Check if there is a task at this location.
		if (SCH_tasks_G[Index].pTask)
		{
			//SCH_tasks_G[Index].Delay -= 1;
			if (SCH_tasks_G[Index].Delay <= 0)
			{
				// The task is due to run.
				// Increment the RunMe flag.
				SCH_tasks_G[Index].RunMe += 1;
				if (SCH_tasks_G[Index].Period)
				{
					// Schedule periodic tasks to run again.
					SCH_tasks_G[Index].Delay = SCH_tasks_G[Index].Period;
				}
			}
			else
			{
				// Not yet ready to run; just increment the delay.
				SCH_tasks_G[Index].Delay -= 1;
			}
		}
	}
}

unsigned char SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD)
{
	unsigned char Index = 0;
	// First find a gap in the array (if any).
	while ((SCH_tasks_G[Index].pTask != 0) && (Index < SCH_MAX_TASKS))
	{
		Index++;
	}
	if (Index == SCH_MAX_TASKS)
	{
		// Task list is full.
		return SCH_MAX_TASKS;
	}
	SCH_tasks_G[Index].pTask = pFunction;
	SCH_tasks_G[Index].Delay = DELAY;
	SCH_tasks_G[Index].Period = PERIOD;
	SCH_tasks_G[Index].RunMe = 0;
	// Return position of task (to allow later deletion).
	return Index;
}

void SCH_Dispatch_Tasks(void)
{
	unsigned char Index;
	// Dispatches (runs) the next task (if there is one ready).
	for (Index = 0; Index < SCH_MAX_TASKS; Index++)
	{
		if (SCH_tasks_G[Index].RunMe > 0)
		{
			(*SCH_tasks_G[Index].pTask)();
			SCH_tasks_G[Index].RunMe -= 1; // Reset / reduce RunMe flag.
			// Periodic task will automatically run again.
			// If this is a one-shot task, remove it from the array.
			if (SCH_tasks_G[Index].Period == 0)
			{
				SCH_Delete_Task(Index);
			}
		}
	}
	SCH_Go_To_Sleep();
}

unsigned char SCH_Delete_Task(uint32_t TASK_INDEX)
{
	unsigned char Return_code = 0;
	if (SCH_tasks_G[TASK_INDEX].pTask == 0)
	{

		// Return_code = RETURN_ERROR;
	}
	else
	{
		// Return_code = RETURN_NORMAL;
	}
	SCH_tasks_G[TASK_INDEX].pTask = 0x000;
	SCH_tasks_G[TASK_INDEX].Delay = 0;
	SCH_tasks_G[TASK_INDEX].Period = 0;
	SCH_tasks_G[TASK_INDEX].RunMe = 0;
	return Return_code;
}

void SCH_Go_To_Sleep(void)
{
	HAL_SuspendTick();
	HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFI);
	HAL_ResumeTick();
}
