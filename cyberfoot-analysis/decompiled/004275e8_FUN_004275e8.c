// Address: 004275e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004275e8(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x20) == 0) {
    cVar1 = FUN_00403b38(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (**(code **)**(undefined4 **)(in_stack_00000004 + 0x20))();
  }
  return uVar2;
}

