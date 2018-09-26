.. title:: clang-tidy - misc-class-inherit-from-struct

misc-class-inherit-from-struct
==============================

Finds instances of classes inheriting from structs. Structs are meant for 
storing data and are often used to maintain C compatibility. Having a class
inherit from them can lead to confusion with what type of object is being 
dealt with. Additionally, the default public nature of struct members can 
lead to unintentional exposure of members.

.. code-block:: c++
  
  struct A {};
  class B: public A {}; //throws an error, members of A might be
                        //unintentionally exposed
  class C {};
  class D: public C {}; //fine
