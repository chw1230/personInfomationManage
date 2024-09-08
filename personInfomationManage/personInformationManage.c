#include <stdio.h>
#define MAX_COUNT 5
typedef struct People {
	char name[14];
	unsigned short int age;
	float height;
	float weight;
}Person;

int addFriendsS(Person* p_friends, int cnt) {
	printf("���ο� �ι� ������ �Է��Ͻÿ�");
	printf("\n1. �̸� : ");
	scanf("%s", (p_friends + cnt)->name);
	printf("2. ���� : ");
	scanf("%hu", &(p_friends + cnt)->age);
	printf("3. Ű : ");
	scanf("%f", &(p_friends + cnt)->height);
	printf("4. ������ : ");
	scanf("%f", &(p_friends + cnt)->weight);
	return 1;
}
int showFriendsS(Person* p_friends, int cnt) {
	if (cnt <= 0) {
		printf("��ϵǾ��ִ� ������ �����ϴ�.\n �ι� �߰� ���� �ǽ��Ͻÿ�\n");
	}
	else {
		for (int i = 0; i < cnt; i++) {
			printf("\n1. �̸� : %s ", p_friends->name);
			printf("\n2. ���� : %d ", p_friends->age);
			printf("\n3. Ű : %f ", p_friends->height);
			printf("\n4. ������ : %f", p_friends->weight);
			printf("\n\n");
			p_friends++;
		}
	}
	return 0;
}

void main() {
	int num;
	int cnt = 0;
	Person friends[MAX_COUNT];
	while (1) {
		printf("\n        [����ü]         ");
		printf("\n         [menu]         \n");
		printf("========================\n");
		printf("1. �ι� �߰�\n");
		printf("2. �ι� ��� ����\n");
		printf("3. ����\n");
		printf("========================\n");
		printf("��ȣ ���� : ");
		scanf("%d", &num);

		if (num == 1) {
			//ģ�� �߰�
			if (cnt < MAX_COUNT) {
				addFriendsS(friends, cnt);
				cnt++;
			}
			else {
				printf("�Է��� �� �ִ� �ι��� ��(5��)�� �Ѿ����ϴ�.\n");
			}
		}
		else if (num == 2) {
			//ģ�� ��� ����
			showFriendsS(friends, cnt);
		}
		else if (num == 3) {
			//����
			printf("���� ���α׷��� ����Ǿ����ϴ�.");
			break;
		}
		else {
			printf("��ȣ�� 1,2,3�� �Է� �����մϴ�.\n");
		}
	}
}