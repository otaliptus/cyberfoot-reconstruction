// Address: 005bdb2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005bdb2c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  cVar1 = FUN_00403b38(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(in_stack_00000004 + 4) + 0x208) + 0x10;
    cVar1 = IsEqualGUID();
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      FUN_00403b38(in_stack_00000004,&LAB_005bdb84,in_stack_0000000c,in_stack_00000008,iVar3);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

