#include <Stdio.h>
int main()
{
	int mylevel,level,count,gold,item= 0;
	int time = 0;
	float generation = 7.5;
	float result = 0; 
	float gen = 0;
//	printf("gen: %f", gen);
	printf("�޼� ��ȹ ����\n");
	
	while(1){
	 	printf("������ �Է��ϼ���:");
	 	scanf("%d",&mylevel);
	 	if(mylevel > 0) break;
 	}	
 	printf("����: %d��\n",mylevel);
	while(1){
	 	printf("6������ �������� �Է��ϼ���:");
	 	scanf("%d",&count);
	 	if(count > 0) break;
	}
		printf("��� 6������ ������: %d����\n",count);
	
	while(1){
 	 	printf("�޼� ȹ�淮�� �Է��ϼ���:");
	 	scanf("%d",&gold);
	 	if(gold > 0) break;
	}
	printf("�޼� ȹ�淮: %d%%\n",gold);
	
	while(1){	
	 	printf("������ ȹ�淮�� �Է��ϼ���:");
	 	scanf("%d",&item);
	 	if(item > 0) break;
    }
    printf("������ ȹ�淮: %d%%\n",item);
    
		
	printf("monsterGeneration�� �Է��ϼ���:");
	scanf("%d",&time); 
    gen= (float)time/generation;	
	printf("monsterGeneration �ѷ�: %.1f��\n", gen);
    
	printf("�����~\n");
	printf("gold : %d%%, count: %d, gen: %.2f, item: %d%%\n", gold, count, gen, item);
	result = 1 + gold  * count * gen * item/100;  	
	printf("������ %d �� ��ȹ��� %.0f�Դϴ�.",mylevel,result);
	//1+144% �� 1500�������� 960 * 100%
	//2.44��1500��960��100 ����ؾߵǴ� �� 
	//printf("������ %d �� ��ȹ��� %d�Դϴ�.",mylevel,level*count*gold*item*gen);
		

}


