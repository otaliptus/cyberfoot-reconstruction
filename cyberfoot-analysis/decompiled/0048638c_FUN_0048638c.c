// Address: 0048638c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048638c(void)

{
  HWND pHVar1;
  uint uVar2;
  undefined4 uVar3;
  HWND in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  uVar3 = 0xffffffff;
  pHVar1 = GetWindow(in_stack_00000004,4);
  if (pHVar1 == *(HWND *)(DAT_0066cbf4 + 0x30)) {
    uVar2 = GetWindowLongA(in_stack_00000004,-0x14);
    if (((uVar2 & 8) == 0) ||
       (((*(int *)(DAT_0066cbf4 + 0x44) != 0 && (*(char *)(in_stack_00000008 + 1) == '\0')) &&
        (pHVar1 = (HWND)FUN_0046cae0(*(int *)(DAT_0066cbf4 + 0x44)), in_stack_00000004 == pHVar1))))
    {
      *in_stack_00000008 = in_stack_00000004;
      uVar3 = 0;
    }
    else {
      FUN_0041dec0(*(undefined4 *)(DAT_0066cbf4 + 0x90),in_stack_00000004);
    }
    return uVar3;
  }
  return 0xffffffff;
}

