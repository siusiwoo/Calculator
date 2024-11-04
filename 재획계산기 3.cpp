#include <Stdio.h>
int main()
{
	int mylevel,level,count,gold,item= 0;
	int time = 0;
	float generation = 7.5;
	float result = 0; 
	float gen = 0;
//	printf("gen: %f", gen);
	printf("메소 재획 계산기\n");
	
	while(1){
	 	printf("레벨을 입력하세요:");
	 	scanf("%d",&mylevel);
	 	if(mylevel > 0) break;
 	}	
 	printf("레벨: %d렙\n",mylevel);
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
    gen= (float)time/generation;	
	printf("monsterGeneration 총량: %.1f젠\n", gen);
    
	printf("계산중~\n");
	printf("gold : %d%%, count: %d, gen: %.2f, item: %d%%\n", gold, count, gen, item);
	result = 1 + gold  * count * gen * item/100;  	
	printf("레벨은 %d 총 재획비는 %.0f입니다.",mylevel,result);
	//1+144% × 1500마리수× 960 * 100%
	//2.44×1500×960×100 계산해야되는 식 
	//printf("레벨은 %d 총 재획비는 %d입니다.",mylevel,level*count*gold*item*gen);
		

}


