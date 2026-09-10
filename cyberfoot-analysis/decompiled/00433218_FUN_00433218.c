// Address: 00433218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00433218(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  if (DAT_0066c932 == '\0') {
    DAT_0066c910 = (code *)FUN_004330a8(2,DAT_0066c910,"MonitorFromRect");
    uVar1 = (*DAT_0066c910)();
    return uVar1;
  }
  if ((in_stack_00000008 & 3) == 0) {
    if (in_stack_00000004[2] < 1) {
      return 0;
    }
    if (in_stack_00000004[3] < 1) {
      return 0;
    }
    iVar2 = (*DAT_0066c908)();
    if (iVar2 <= *in_stack_00000004) {
      return 0;
    }
    iVar2 = (*DAT_0066c908)();
    if (iVar2 <= in_stack_00000004[1]) {
      return 0;
    }
  }
  return 0x12340042;
}

