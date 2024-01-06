#include<stdio.h>
#include<stdlib.h>
 void quiz(char ch);
int main(){
	char ch;
     quiz(ch);
	return 0;
}
void quiz(char ch){
	int score=0;
	char c;
	do{
	printf("Welcome to quiz game! \n");
	printf("Lets start! \n");
	printf("Q1:Who painted the Mona Lisa? \n");
	printf("Options are below: \n");
	printf("a:Michelangelo \t b:Pablo Picasso \n c:Leonardo Da Vinci \t d:Vincent Van Gogh \n");
	scanf(" %c",&ch);
	if(ch=='c'){
		printf("Right answer! \n");
		score++	;
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'c'");
	}
    printf("Q2:Which is the largest ocean of the world? \n");
    printf("Options are below: \n");
	printf("a:Atlantic Ocean \t b:Indian Ocean \n c:Arctic Ocean \t d:Pacific Ocean \n");
	scanf(" %c",&ch);
	if(ch=='d'){
		printf("Right answer! \n");
		score++	;
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'd'");
	}
	printf("Q3:Which is the highest mountain of the world? \n");
    printf("Options are below: \n");
	printf("a:Mount Kilimanjaro \t b:K-2 \n c:Mount Fuji \t d:Mount Everest \n");
	scanf(" %c",&ch);
	if(ch=='d'){
		printf("Right answer! \n");
		score++;	
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'd'");
	}
	printf("Q4:Which country drinks the most coffee? \n");
    printf("Options are below: \n");
	printf("a:Italy \t b:France \n c:Finland \t d:Spain \n");
	scanf(" %c",&ch);
	if(ch=='c'){
		printf("Right answer! \n");
		score++;	
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'c'");
	}
	printf("Q5:How many continents are there? \n");
    printf("Options are below: \n");
	printf("a:10 \t b:6 \n c:7 \t d:None of these \n");
	scanf(" %c",&ch);
	if(ch=='c'){
		printf("Right answer! \n");
		score++;	
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'c'");
	}
	printf("Q6:Who founded Amazon? \n");
    printf("Options are below: \n");
	printf("a:Bill Gates \t b:Jeff Bezos \n c:Mark Zuckerberg \t d:Elon Musk \n");
	scanf(" %c",&ch);
	if(ch=='b'){
		printf("Right answer! \n");
		score++;
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'b'");
	}
	printf("Q7: Which country has won the most World Cups in football? \n");
    printf("Options are below: \n");
	printf("a:Brazil \t b:Argentina \n c:Portugal \t d:Germany \n");
	scanf(" %c",&ch);
	if(ch=='a'){
		printf("Right answer! \n");
		score++;	
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'a'");
	}
	printf("Q8:Arachnophobia is the fear of? \n");
    printf("Options are below: \n");
	printf("a:spiders \t b:height \n c:darkness \t d:water \n");
	scanf(" %c",&ch);
	if(ch=='a'){
		printf("Right answer! \n");
		score++	;
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'a'");
	}
	printf("Q9:Which is the tallest building of the world? \n");
    printf("Options are below: \n");
    printf("a:Warisan Merdeka Tower \t b:Shanghai Tower \n c:Burj Khalifa \t d:None of these \n");
	scanf(" %c",&ch);
	if(ch=='c'){
		printf("Right answer! \n");
		score++;	
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'c'");
	}
	printf("Q10:Who was the first woman to fly solo across the Atlantic Ocean? \n");
    printf("Options are below: \n");
	printf("a:Amelia Earhart  \t b:Bessi Coleman \n c:Harriet Quimby \t d:Sheila Scott \n");
	scanf(" %c",&ch);
	if(ch=='a'){
		printf("Right answer! \n");
		score++	;
	}else{
		printf("Wrong answer! \n");
		printf("Right answer is 'a'");
	}
	printf("The End! \n");
	printf("Your Score is %d: ",score);


    printf("Do you want to continue (Y/N): \n");
    scanf(" %c",&c);
	
} while(c=='y' || c=='Y');
}