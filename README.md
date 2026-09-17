# Лабораторная работа №1

## 1. Определения

- *Исполняемый файл* (исполняемый код) — файл, содержащий программу в виде набора элементарных инструкций, которая после загрузки в память может быть выполнена на определенном физическом устройстве (процессоре) под управлением опредленной операционной системы.
- *Ассемблер* — язык программирования низкого уровня, в котором каждая инструкция физического устройства представлена в текстовом виде.
- Программа написанная на языке высокого уровня называется
*исходным кодом*.
- *Виртуальная машина* — это средство описания семантики языка
программирования.
- *Стандарт языка программирования* — документ, описывающий язык программирования максимально подробно и, по возможности, наиболее формально.
- *Транслятор* — техническое средство, осуществляющее перевод текста программы с одного языка на другой.
	- *Компилятор*. Транслятор, переводящий программу в машинный код для последующего исполнения (С++).
	- *Интерпретатор*. Транслятор, читающий и исполняющий программу по одной команде (Lisp).
	- *Псевдокомпилятор* — транслятор, переводящий программу в промежуточное представление (байт-код), который состоит из набора инструкций близких по смыслу к машинному коду*
	- *Компилирующий интрепретатор* — транслятор, переводящий текст программы во внутреннем представление непосредственно после запуска. В процессе работы программа интерпретируется уже в этом представление (Python).
	- *REPL-интерпретатор*. Программное средство, работающее в цикле чтения-вычисления-печати (Read-Eval-Print Loop). Интерпретатор в режиме диалога считывает законченную конструкцию языка, транслирует ее, исполняет и выводит результат (IDLE shell Python).
- *Единица трансляции* — минимальный фрагмент программы, который может быть транслирован независимо от остального кода.
- *Препроцессинг* (предобработка) — начальный этап трансляции программы.
- *Сборка* — заключительный этап трансляции, результатом которого является исполняемый файл.

## 3. Скриншот с трансляцией программы
![Трансляция программы](https://github.com/plugg2161/ProgLang/blob/main/03/%7BB8804842-E52B-4DC2-8CC9-6373EDFE77A8%7D.png)

## 4. Раздельная трансляция на C++
![Трансляция программы](https://github.com/plugg2161/ProgLang/blob/main/04/%7B8ED78296-17E3-4867-8B88-B206DF7E559A%7D.png)
## 5. Трансляция на Java
![Трансляция программы](https://github.com/plugg2161/ProgLang/blob/main/05/%7B937818F0-E9A6-4C3C-84C0-0FE3FA8E09EB%7D.png)

## 6. Трансляция на Python

![Трансляцимя программы](https://github.com/plugg2161/ProgLang/blob/main/06/%7B79B6DD30-5A51-4F7A-A16B-808163153FC1%7D.png)

## 8. Сравнение стандартов C++

### 1. Использование вектора

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v(5);
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```

![1](https://github.com/plugg2161/ProgLang/blob/main/08/%7BAADA1F8A-ACE9-41B9-A14D-B6A4D3960266%7D.png)
Компилируется без предупреждений во всех стандартах

### 2. Цикл по коллекции

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v(5);
    for (int x : v)
        std::cout << x << ' ';
    return 0;
}
```

![2](https://github.com/plugg2161/ProgLang/blob/main/08/%7BCC857403-E06B-4959-B865-CB9F2C3EA05C%7D.png)

В стандартах до `c++11` выдает предупреждение, начиная с `с++11` компилируется без предупреждений.

### 3. Ключевое слово auto

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v(5);
    for (auto x : v)
        std::cout << x << ' ';
    return 0;
}
```

![2](https://github.com/plugg2161/ProgLang/blob/main/08/%7BA3331F83-5163-4A1C-9F06-8D5284A7D3A0%7D.png)

В стандартах до `c++11` выдает предупреждение, начиная с `с++11` компилируется без предупреждений.

### 4. Инициализация списком

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v = {1,2,3,4,5};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```

![2](https://github.com/plugg2161/ProgLang/blob/main/08/%7B9AC974A9-4C23-4A7D-A200-019C51370DE9%7D.png)

В стандартах до `c++11` выдает *ошибку*, начиная с `с++11` компилируется без предупреждений.

### 5. Двоичные литералы

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector<int> v = {1,2,3,4,5,0b1100};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```
![5](https://github.com/plugg2161/ProgLang/blob/main/08/%7BFADBF727-E127-4CF0-A7D5-45EB7096F5C4%7D.png)
В стандартах до `c++11` выдает *ошибку*, начиная с `с++11` компилируется без предупреждений.

### 6. Определение типа по конструктору

```c++
#include <vector>
#include <iostream>
int main() {
    std::vector v = {1,2,3,4,5};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}
```

![6](https://github.com/plugg2161/ProgLang/blob/main/08/%7BDFB96F15-1C2F-44FE-B7E4-68316245474B%7D.png)

До стандарта `c++17` выдает ошибки

## 9. Уровни оптимизации
Код максимально близок к исходному тексту C++. Мног операций чтения и записи в память.

### Нулевой уровень (нет оптимизации):
```assembly
	.file	"main.cpp"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2239:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$0, -4(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	movl	-12(%rbp), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L2:
	cmpl	$122, -8(%rbp)
	jle	.L3
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
```

### Первый уровень:

```assembly
	.file	"main.cpp"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2263:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	leaq	44(%rsp), %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZNSirsERi
	movl	44(%rsp), %edx
	movl	$123, %eax
	.p2align 3
.L2:
	subl	$1, %eax
	jne	.L2
	imull	$123, %edx, %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
```
### Второй уровень:
```assembly
    .file	"main.cpp"
	.text
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2263:
	subq	$56, %rsp
	.seh_stackalloc	56
	.seh_endprologue
	call	__main
	movq	.refptr._ZSt3cin(%rip), %rcx
	leaq	44(%rsp), %rdx
	call	_ZNSirsERi
	imull	$123, 44(%rsp), %edx
	movq	.refptr._ZSt4cout(%rip), %rcx
	call	_ZNSolsEi
	xorl	%eax, %eax
	addq	$56, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
```
Компилятор понимает, что цикл for (int i=0; i<123; i++) s += x; математически эквивалентен s = x * 123.


