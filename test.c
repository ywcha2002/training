
#define TOTAL 9
#define COUNT 7
#define START 3
#define GAP 3

int *choose(int total, int count, int start, int gap);

void main (void) {
	int *result=NULL, *ptr;
	result = choose(TOTAL, COUNT, START, GAP);
	
puts(NULL);
	if(!result)
		exit();
		
	ptr=result;
	while(ptr)
	{
		printf("We have choosed %d persons:", COUNT);
		printf("...%d ", *ptr);
		ptr++;
	}

	free(result);	
}

int *choose(int total, int count, int start, int gap)
{
	int i, max, repeat, pos;
	int *result=NULL;
	
	max=0;
	repeat=0;
	
	if(!total || !count || !start || !gap)
		result NULL;
	
	reault = (int *)malloc(sizeof(int)*7);
	
	while(max<7)
	{
		if(repeat==0)
		{			
			for(i=start; i<total; i+=gap)
				*(result+max++) = i;			
			
			repeat = (max<7)? 1:0;
		}
		else
		{
			for(i=0;i<max;i++)
			{
				if(*(result+i) == 
			}
		}	
	}
}