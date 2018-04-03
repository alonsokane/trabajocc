	/*
#include <iostream>
using namespace std;
int main()

{
	int e;
	cout <<"ejercicio 1"<<endl;
	cout <<"ingrese su edad"<<endl;
	
	cin >>e ;
	if (e>0 && e<150){
		if (e<18){
			cout<<"es menor de edad"<<endl;
		}
		else {
			cout<<"es mayor de edad"<<endl;
		}
	} else {
		cout<<"su edad no es correcta"<<endl;
	
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"ejercicio 2"<<endl;
	cout <<"ingrese un numero"<<endl;
	cin >>n;
	if (n>0){
		for (int i=0;i<n;i++){
		     cout<<i<<",";
		}
		cout<<n<<"."<<endl;

	} else{
		cout<<"el numero es menor que 1"<<endl;
	}
	
	return 0;
}
#include <iostream>
using namespace std;
int main ()
{	float a,b,c;
    float promedio;
    cout <<"ejercicio 3"<<endl;
	cout<<"ingrese 3 numeros"<<endl;
	cin>>a>>b>>c;
	if (a>b){
		if(a>c){
			cout<<"el numero mayor es:"<<a<<endl;


		}else{
			cout<<"el numero mayor es:"<<c<<endl;


		}
	} else{
		if (b>c){
			cout<<"el numero mayor es:"<<b<<endl;
		} else {
			cout<<"el numero mayor es:"<<c<<endl;
		}
	}



	if (a<b){
		if(a<c){
			cout<<"el numero menor es:"<<a<<endl;


		}else{
			cout<<"el numero memor es:"<<c<<endl;


		}
	} else{
		if (b<c){
			cout<<"el numero menor es:"<<b<<endl;
		} else {
			cout<<"el numero menor es:"<<c<<endl;
		}
	}

	promedio=(a+b+c)/3;
	cout<<"el promedio es:"<<promedio<<endl;



	return 0;

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout <<"ejercicio 4"<<endl;
	cout<<"ingrese dos nuemeros"<<endl;
	cin>>a>>b;
	if (a%2==0){
		cout<<a<<" es multiplo de 2"<<endl;
	}else{
		cout<<a<<" no es multiplo de 2"<<endl;

	}
	if (b%2==0){
		cout<<b<<" es multiplo de 2"<<endl;
	}else {
		cout<<b<<" no es multiplo de 2"<<endl;

	}

	if (b%a==0){
		cout<<a<<" es multiplo de "<<b<<endl;
	}else{
		cout<<a<<" no es multiplo de "<<b<<endl;
	}
	if (a^2==b){
		cout<<a<<" elevado al cuadrado tiene como resultado "<<b<<endl;
	}else {
		cout<<a<<" elevado al cuadrado no tiene como resultado "<<b<<endl;
	}



	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int numero,c=0;
	
	
	do
	{ cout <<"ejercicio 5"<<endl;
	cout<<"ingrese un numero mayor que 1"<<endl;
		cin>>numero;
	}
	while (numero<1);
		

		for (int i=1;i<numero;i++){
			
			if (numero%i==0){
				c++;
			}

		}
		if (c<2){
			cout <<"el numero  es primo"<<endl;

		}else 
		{
			cout <<"el numero no es primo"<<endl;
		}




	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int numero,c;
	do
	{ cout <<"ejercicio 6"<<endl;
	cout<<"ingrese un numero mayor que 1"<<endl;
		cin>>numero;
	}
	while (numero<2);
	if (numero==2){
		cout<<"el unico numero primo es "<<numero<<endl;
	} else{
	for (int i=2;i<numero;i++){
		int c=0,k=i;
		for (int j=1;j<i;j++){
			if (i%j==0){
				c++;
			}

		}
		if (c<2){
			cout <<k<<",";

		}	
			

		}
	cout<<"estos son los numeros primos menores de "<<numero<<endl;	}


		
		

		

	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int n,d=100000,m=10000,b;
	do
	{ cout <<"ejercicio 7"<<endl;
	cout<<"ingrese un numero de cinco digitos"<<endl;
		cin>>n;
	}while (n>100000 || n<9999);
	for (int i=0;i<5;i++){
		b=n%d/m;
		d=d/10;
		m=m/10;
		cout<<b<<"\t";

	}

	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int n,d=100000,m=10000,d1=10,m1=1,b,b1,c=0;
	do
	{ cout <<"ejercicio 8"<<endl;
	cout<<"ingrese un numero de cinco digitos"<<endl;
		cin>>n;
	}while (n>100000 || n<9999);
	

	
	for (int i=0;i<2;i++){
		
		b=n%d/m;
		b1=n%d1/m1;
		
		if(b==b1){
			c++;
			
		}
		d=d/10;
		m=m/10;
		d1=d1*10;
		m1=m1*10;
		

	}
	if(c==2){
		cout<<"el numero es palindrome"<<endl;
	}

	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int año;
	do { cout <<"ejercicio 9"<<endl;
		cout<<"ponga un año"<<endl;
		cin>>año;
	} while(año<0);
	if (año%4) {
		if (año%400!=0 || año%100!=0)
		{
			cout<<"es un año bisiesto"<<endl;
		} else{
			cout<<"no es un año bisiesto"<<endl;
		}

	} else {
		cout<<"no es un año bisiesto"<<endl;
	}


	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int n,f=0,in=1,b;
	do{ cout <<"ejercicio 10"<<endl;
		cout<<"pongo un numero para la serie de fibonacci"<<endl;
		cin>>n;
	}while(n<0);
	for (int i=0;i<n;i++){
		b=in;
		in=in+f;
		cout<<in<<",";
		f=b;
		if (i==0){
			f=0;
		}

	}
	return 0;
}
#include <iostream>
using namespace std;
int main (){
	int f,r=1;
	do{ cout <<"ejercicio extra"<<endl;
		cout<<"ingrese un numero para sacar su factorial"<<endl;
		cin>>f;
	}while(f<0);
	for (int i=1;i<=f;i++){
		r=r*i;
	}cout<<r<<endl;
	return 0;
}*/