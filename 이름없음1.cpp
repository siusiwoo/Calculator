#include <Stdio.h>
int main()
{
	int mylevel,level,count,gold,item= 0;
	int time = 0;
	float generation = 7.5;
	
	
	
	printf("�޼� ��ȹ ����\n");
	
	while(1){
	 	printf("������ �Է��ϼ���:");
	 	scanf("%d",&mylevel);
	 	if(mylevel > 0) break;
 	}
 	printf("����ϴ� ĳ���� ���� �Է��ϼ���: %d��\n",mylevel);
 	
	while(1){
		printf("������� ������ �Է��ϼ���:");
		scanf("%d",&level);
		if(level > 0) break;
	}
	printf("������� ���� ���� �Է��ϼ���: %d��\n",level);
		
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
	printf("monsterGeneration �ѷ�: %.1f��\n", (float)time/generation);
	
}
