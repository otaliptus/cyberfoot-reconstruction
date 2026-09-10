// Address: 00425148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00425148(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  
  uVar3 = 1;
  iVar2 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if ((iVar2 == 0) && (cVar1 = FUN_004250f0(), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_00403c10(iVar2,PTR_PTR_0041b84c);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403c10(iVar2,PTR_PTR_0041c690);
    if ((cVar1 == '\0') || ((*(byte *)(iVar2 + 0x24) & 4) != 0)) {
      uVar3 = 0;
    }
    else {
      cVar1 = FUN_004250f0();
      if ((cVar1 == '\0') && (*(int *)(iVar2 + 8) != 0)) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

