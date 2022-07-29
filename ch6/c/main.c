#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//ㄧ计絤策 
void test1(){
	printf("Test1 Func");	
}
void test2(int a1,int a2){
	printf("a1:%d a2:%d",a1,a2);
}
int test3(int a1,int a2){
	int ans = a1*a2;
	return ans;
}
//癹伴絤策 
void testLoop(){
	int i;	
	for(i = 1;i<=5;i++){
		printf("%d ",i);
	}
}

void testLoop2(){
	int i;
	for(i = 1; i <= 5;i++){
		int k;
		for(k = 1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}
//患癹絤策	
void testRec(int c){
		printf("%d\n",c);
		if(c < 5){
		  printf("C S1 %d\n",c);	
		  testRec(c + 1);	
		  printf("C S2 %d\n",c);	
		}
		printf("En  %d\n",c);	
}
void testOp(){
	int i = 0;
	i++;
	i++;
	++i;
	++i; 
	--i;
	printf("%d",i);
}	
void testOp2(){
	int x = 0;
	int y = 0;
	int g = x++;
	//int g = x;
	//x = x+ 1l
	int k = ++y;
	//y = y + 1
	//k = y
	printf("g:%d\n",g);
	printf("x:%d\n",x);
	printf("k:%d\n",k);
	printf("y:%d\n",y);		
} 
void testOp3(){
	int a = 5;
	int b = 2;
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	//笲衡Α讽いΤ疊翴计 挡狦穦Τ计翴 
	float c = 2.0;
	printf("%d\n",a/b);//⊿Τ计翴 
	printf("%.2f\n",a/c);//Τ计翴 
}
void testOp4(){
	int b1 = 0;//false
	int b2 = 1;//true
	printf("b1 && b2:%d\n",b1&&b2);//and
	printf("b1 || b2:%d\n",b1||b2);//or
	printf("!b1:%d",!b1);//not
}

void testOp5(){
	int score = 25;
//(score >= 60) ?"の":"ぃの"
 //char result[] = "の";
  //char *result =  (score >= 60) ? "の" : "ぃの";
   //printf("result:%s\n",result);
   printf((score >= 60) ? "の" : "ぃの");
}

void test6(){
	int input = 0;
	printf("input int:");
	scanf("%d",&input);
	printf("odd number:%c",input %2 ? 'Y':'N' );
}

int testIf1(){
	int number = 6;
	if (number % 2 == 1){
		printf("odd");
	}else{
		printf("even");
	}
}

void testIf2(){
	int score =65;
	if (score >= 90){
		printf("A");
	}else if(score >= 80 && score <= 90){
		printf("B");
	}else if(score  >= 70 && score <= 80 ){
		printf("C");
	}else if(score >= 60 && score < 70){
		printf("D");
	}else{
		printf("F");
	} 
}
void testSwitch(){
	int action = 5;
	switch(action){
		case 1:
			printf("Play");
		    break;	
		case 2:
			printf("Stop");
			break;
		case 3:
			printf("Exit");	    
			break;
		default:
			printf("Error!");
		 	break;	
	}
}

void testWhile(){
	int count = 0;
	while(count < 5){
		count++; 
		printf("%d\n",count);		
	}	
}

void testArray1(){
	
	int array[10]={0};
	array[2] = 5;
	array[6] = 3;
	int i;
	for (i=0; i< 10;i++){
		printf("%d\n",array[i]);
	}	
}
int f1(int n){
	if (n == 1){
		return 1;
	}
	return n * f1(n-1);
	//5!
	//1*2*3*4*5
	//n*!(n-1)
	//5*4!
}

//M 砆埃计
//N 埃计
// 砆埃计/埃计
int gcd(int m ,int n){
	if (n == 0){
		return m;
	}else{
		gcd(n,m%n);
	}	
}

//Fibonacci禣Α玒计 
int fib(int n){
	if (n == 0){
	  return 0;	
	}else if(n==1){
		return 1;	
	}else{
		return fib(n-1)+fib(n-2);
	}
}

int main(int argc, char *argv[]) {
	int f = fib(6);
	printf("fib:%d",f);
//	int num1 = 20;
//	int num2 = 14;
//	int result = gcd(num1,num2);
//	printf("res:%d",result);
	
	//printf("f1:%d\n",f1(5));
	//testArray1();
	//testWhile();
	//testSwitch();
	//testIf2();
	//testIf1();
	//test6();
	//testOp5();
	//testOp4();
	//testOp3();
	//testOp2();
	//testOp();
	//testRec(1);
	//testLoop2(); 
	//testLoop();
	//int v1 = test3(2,3);
	//printf("v1:%d",v1);
	//test2(25,15);
	//test1();
	  //printf("Char %c\n", 'A');
	int a = 3,a2 = 25;
	char c1 = 'B';
	//ユ传璶剪 
//	int x = 10;
//	int y = 20;
//	int tmp = x;
//	x = y;
//	y = tmp;
//	printf("x:%d,y:%d",x,y);

//	int input1;
//	printf("Input Integer:");
//	scanf("%d",&input1);
//	printf("You are input:%d",input1);

//	char c;
//	printf("Input Char:");
//	c = getchar();
//	putchar(c);	

	return 0;
}
