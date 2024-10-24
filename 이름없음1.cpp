#include <Stdio.h>
int main()
{
	int mylevel,level,count,gold,item= 0;
	int time = 0;
	float generation = 7.5;
	
	
	
	printf("메소 재획 계산기\n");
	
	while(1){
	 	printf("레벨을 입력하세요:");
	 	scanf("%d",&mylevel);
	 	if(mylevel > 0) break;
 	}
 	printf("사냥하는 캐릭터 레벨 입력하세요: %d렙\n",mylevel);
 	
	while(1){
		printf("사냥터의 레벨을 입력하세요:");
		scanf("%d",&level);
		if(level > 0) break;
	}
	printf("사냥터의 몬스터 레벨 입력하세요: %d렙\n",level);
		
	while(1){
	 	printf("6분측정 마릿수를 입력하세요:");
	 	scanf("%d",&count);
	 	if(count > 0) break;
	}
		printf("평균 6분측정 마릿수: %d마리\n",count);
	
	while(1){
 	 	printf("메소 획득량을 입력하세요:");
	 	scanf("%d",&gold);
	 	if(gold > 0) break;
	}
	printf("메소 획득량: %d%%\n",gold);
	
	while(1){	
	 	printf("아이템 획득량을 입력하세요:");
	 	scanf("%d",&item);
	 	if(item > 0) break;
    }
    printf("아이템 획득량: %d%%\n",item);
    
		
	printf("monsterGeneration을 입력하세요:");
	scanf("%d",&time); 
	printf("monsterGeneration 총량: %.1f젠\n", (float)time/generation);
	
}
