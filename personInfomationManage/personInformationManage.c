#include <stdio.h>
#define MAX_COUNT 5
typedef struct People {
	char name[14];
	unsigned short int age;
	float height;
	float weight;
}Person;

int addFriendsS(Person* p_friends, int cnt) {
	printf("새로운 인물 정보를 입력하시오");
	printf("\n1. 이름 : ");
	scanf("%s", (p_friends + cnt)->name);
	printf("2. 나이 : ");
	scanf("%hu", &(p_friends + cnt)->age);
	printf("3. 키 : ");
	scanf("%f", &(p_friends + cnt)->height);
	printf("4. 몸무게 : ");
	scanf("%f", &(p_friends + cnt)->weight);
	return 1;
}
int showFriendsS(Person* p_friends, int cnt) {
	if (cnt <= 0) {
		printf("등록되어있는 정보가 없습니다.\n 인물 추가 부터 실시하시오\n");
	}
	else {
		for (int i = 0; i < cnt; i++) {
			printf("\n1. 이름 : %s ", p_friends->name);
			printf("\n2. 나이 : %d ", p_friends->age);
			printf("\n3. 키 : %f ", p_friends->height);
			printf("\n4. 몸무게 : %f", p_friends->weight);
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
		printf("\n        [구조체]         ");
		printf("\n         [menu]         \n");
		printf("========================\n");
		printf("1. 인물 추가\n");
		printf("2. 인물 목록 보기\n");
		printf("3. 종료\n");
		printf("========================\n");
		printf("번호 선택 : ");
		scanf("%d", &num);

		if (num == 1) {
			//친구 추가
			if (cnt < MAX_COUNT) {
				addFriendsS(friends, cnt);
				cnt++;
			}
			else {
				printf("입력할 수 있는 인물의 수(5명)를 넘었습니다.\n");
			}
		}
		else if (num == 2) {
			//친구 목록 보기
			showFriendsS(friends, cnt);
		}
		else if (num == 3) {
			//종료
			printf("관리 프로그램이 종료되었습니다.");
			break;
		}
		else {
			printf("번호는 1,2,3만 입력 가능합니다.\n");
		}
	}
}