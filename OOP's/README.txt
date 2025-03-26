# Object-Oriented Programming (OOPs) Concepts

## 1. What is OOPS?
OOPS is abbreviated as **Object-Oriented Programming System**, in which programs are considered as a collection of objects. Each object is an instance of a class.

## 2. Basic Concepts of OOPS
Following are the concepts of OOPS:
1. **Abstraction**
2. **Encapsulation**
3. **Inheritance**
4. **Polymorphism**

## 3. What is a class?
A class is a representation of a type of object. It is the **blueprint, plan, or template** that describes the details of an object.

## 4. What is an Object?
An object is an instance of a class. It has its own **state, behavior, and identity**.

## 5. What is Encapsulation?
Encapsulation is an attribute of an object, and it contains all **data which is hidden**. That hidden data can be restricted to the members of that class.

Levels of Encapsulation:
- Public
- Protected
- Private
- Internal
- Protected Internal

## 6. What is Polymorphism?
Polymorphism is the ability of an object to take **more than one form**. It allows assigning behavior or value in a subclass to something that was already declared in the main class.

## 7. What is Inheritance?
Inheritance is a concept where **one class shares the structure and behavior** defined in another class.
- **Single Inheritance** – When a class inherits from only one base class.
- **Multiple Inheritance** – When a class depends on multiple classes.

## 8. What are Manipulators?
Manipulators are functions that can be used in conjunction with the **insertion (<<) and extraction (>>) operators** on an object. Examples:
- `endl`
- `setw`

## 9. Explain the term Constructor
A constructor is a method used to **initialize the state of an object**, and it gets invoked at the time of object creation.

### Rules for Constructors:
- Constructor name should be **the same as class name**.
- A constructor **must not have a return type**.

## 10. Define Destructor
A destructor is a method that is **automatically called when an object is out of scope or destroyed**.

- The destructor name is the **same as the class name**, but with a `~` (tilde) symbol before the name.

## 11. What is an Inline Function?
An inline function is a technique used by compilers to **insert the complete body of the function wherever it is used** in the program source code.

## 12. What is a Virtual Function?
A virtual function is a **member function of a class** whose functionality can be overridden in its derived class.

- Declared using the keyword `virtual` in C++.
- Achieved in C/Python using **function pointers or pointers to function**.

## 13. What is a Friend Function?
A friend function is a **friend of a class** that is allowed to access **private, protected, or public** data of the class.

- A friend function is declared **inside the class** but defined **outside the class**.
- It is **not affected by access control keywords** like private, public, or protected.

## 14. What is Function Overloading?
Function overloading allows the **creation of multiple methods with the same name** but different parameters.

### Example:
```cpp
void add(int &a, int &b);
void add(double &a, double &b);
void add(struct bob &a, struct bob &b);
```

## 15. What is Operator Overloading?
Operator overloading is a function where **different operators** are applied and depend on the arguments.
- Operators such as `+`, `-`, `*`, etc., can be **passed through functions**.

## 16. What is an Abstract Class?
An abstract class is a class that **cannot be instantiated**.
- Creation of an object is **not possible** with an abstract class.
- It can contain **only abstract methods**.

### Language-Specific Rules:
- **Java** allows only abstract methods in an abstract class.
- **Other languages** allow both abstract and non-abstract methods.

## 17. What is a Ternary Operator?
A ternary operator is an **operator that takes three arguments** and acts as a conditional operator.

## 18. What is the Use of the `finalize` Method?
The `finalize` method helps to **perform cleanup operations** on resources that are no longer used.
- The `finalize` method is **protected** and can be accessed only through this class or a derived class.

## 19. What are the Different Types of Arguments?
A parameter is a variable used during the **function declaration**.
Arguments are values **passed to the function body**.

### Types of Arguments:
- **Call by Value** – The value passed **modifies only inside the function**.
- **Call by Reference** – The value passed **modifies both inside and outside the function**.

## 20. What is the `super` Keyword?
The `super` keyword is used to **invoke an overridden method** from its superclass.

### Uses of `super`:
- Access overridden methods.
- Access hidden members of the superclass.
- Forward a constructor call to a constructor in the superclass.

## 21) What is Method Overriding?
Method overriding is a feature that allows a subclass to provide the implementation of a method that overrides one in the main class. It will override the implementation in the superclass by providing the same method name, same parameters, and same return type.

## 22) What is an Interface?
An interface is a collection of abstract methods. If a class implements an interface, it thereby inherits all the abstract methods of the interface. Java uses interfaces to implement multiple inheritance.

## 23) What is Exception Handling?
An exception is an event that occurs during the execution of a program. Exceptions can be of any type – Runtime exception, Error exceptions. These exceptions are adequately handled through exception handling mechanisms like `try`, `catch`, and `throw` keywords.

## 24) What are Tokens?
A compiler recognizes a token, and it cannot be broken down into smaller components. Keywords, identifiers, constants, string literals, and operators are examples of tokens. Even punctuation characters are also considered tokens. Example: Brackets, Commas, Braces, and Parentheses.

## 25) What is the Main Difference Between Overloading and Overriding?
- Overloading is **static binding**, whereas overriding is **dynamic binding**.
- Overloading refers to the same method with different arguments, and it may or may not return the same value within the same class.
- Overriding refers to methods with the same name, same arguments, and same return types associated with a class and its child class.

## 26) What is the Main Difference Between a Class and an Object?
- An **object** is an instance of a class. Objects hold multiple pieces of information, but classes do not have any information.
- A **class** defines properties and functions, which can be used by an object.
- A class can have sub-classes, while an object does not have sub-objects.

## 27) What is Abstraction?
Abstraction is a feature of OOP that shows only the necessary details to the client of an object. It means showing only required details for an object, not the inner constructors or mechanisms. 
Example: When you turn on a television, you don’t need to know its internal circuitry; you just press the power button.

## 28) What are Access Modifiers?
Access modifiers determine the scope of a method or variable that can be accessed from various objects or classes. The five types of access modifiers are:
- Private
- Protected
- Public
- Friend
- Protected Friend

## 29) What are Sealed Modifiers?
Sealed modifiers are access modifiers where methods cannot be inherited. Sealed modifiers can also be applied to properties, events, and methods. This modifier cannot be used for static members.

## 30) How Can We Call the Base Method Without Creating an Instance?
Yes, it is possible to call the base method without creating an instance, and that method should be a **static method**. 
- Using inheritance from that class.
- Using the `Base` keyword from a derived class.

## 31) What is the Difference Between `new` and `override`?
- The `new` modifier instructs the compiler to use the new implementation instead of the base class function.
- The `override` modifier helps to override the base class function.

## 32) What are the Various Types of Constructors?
There are three types of constructors:
- **Default Constructor** – Without parameters.
- **Parameterized Constructor** – With parameters. It creates a new instance of a class while passing arguments simultaneously.
- **Copy Constructor** – Creates a new object as a copy of an existing object.

## 33) What is Early and Late Binding?
- **Early binding** refers to the assignment of values to variables during **design time**.
- **Late binding** refers to the assignment of values to variables during **runtime**.

## 34) What is the `this` Pointer?
The `this` pointer refers to the current object of a class. The `this` keyword differentiates the current object from the global object.

## 35) What is the Difference Between a Structure and a Class?
- The **default access type** of a structure is `public`, but for a class, it is `private`.
- A **structure** is used for grouping data, whereas a **class** can be used for grouping both data and methods.
- Structures are used exclusively for data and do not require strict validation, whereas classes encapsulate and inherit data, requiring strict validation.

## 36) What is the Default Access Modifier in a Class?
- The default access modifier of a class is **internal**.
- The default access modifier of a class member is **private**.

## 37) What is a Pure Virtual Function?
A pure virtual function is a function that can be overridden in the derived class but cannot be defined. A virtual function can be declared as pure by using the `= 0` operator.
Example:
```cpp
Virtual void function1(); // Virtual, not pure
Virtual void function2() = 0; // Pure virtual
```

## 38) What are All the Operators That Cannot be Overloaded?
The following operators **cannot** be overloaded:
1. Scope Resolution (`::`)
2. Member Selection (`.`)
3. Member Selection Through a Pointer to Function (`.*`)

## 39) What is Dynamic or Runtime Polymorphism?
Dynamic or runtime polymorphism is also known as **method overriding**, in which a call to an overridden function is resolved during runtime, not at compile time. It means having two or more methods with the same name, the same signature, but different implementations.

## 40) Do We Require a Parameter for Constructors?
No, we do not require a parameter for constructors. Constructors can exist with or without parameters.


## 41) What is a copy constructor?
A copy constructor is a special constructor for creating a new object as a copy of an existing object. There will always be only one copy constructor that can be either defined by the user or the system.

## 42) What does the keyword 'virtual' represent in the method definition?
It means we can override the method.

## 43) Whether a static method can use non-static members?
False.

## 44) What are a base class, subclass, and superclass?
- The base class is the most generalized class, and it is said to be a root class.
- A subclass is a class that inherits from one or more base classes.
- The superclass is the parent class from which another class inherits.

## 45) What is static and dynamic binding?
- **Static Binding**: A binding in which a name can be associated with the class during compilation time; also called early binding.
- **Dynamic Binding**: A binding in which a name can be associated with the class during execution time; also called late binding.

## 46) How many instances can be created for an abstract class?
Zero instances will be created for an abstract class. In other words, you cannot create an instance of an abstract class.

## 47) Which keyword can be used for overloading?
The `operator` keyword is used for overloading.

## 48) What is the default access specifier in a class definition?
The default access specifier in a class definition is **private**.

## 49) Which OOPS concept is used as a reuse mechanism?
**Inheritance** is the OOPS concept that can be used as a reuse mechanism.

## 50) Which OOPS concept exposes only the necessary information to the calling functions?
**Encapsulation**.

