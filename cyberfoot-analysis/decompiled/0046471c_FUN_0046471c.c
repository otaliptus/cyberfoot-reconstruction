// Address: 0046471c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0046471c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_0066cb74 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_0066cb90 == '\x02')) {
    cVar1 = (**(code **)(*DAT_0066cb70 + 0x54))();
    if ((cVar1 == '\0') && (DAT_0066cb70[0x28] != 0)) {
      if (DAT_0066cb70[0x28] != 0) {
        uVar2 = FUN_00403c80(DAT_0066cb70[0x28],*(undefined4 *)(DAT_0066cb74 + 4),DAT_0066cb70);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

