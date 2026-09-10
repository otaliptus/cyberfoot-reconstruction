// Address: 00456cb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00456cb4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 6) != '\0') && (*(int *)(param_1 + 8 + (param_2 & 0xff) * 4) == 0)) {
    uVar1 = (**(code **)PTR_DAT_0066af48)();
    *(undefined4 *)(param_1 + 8 + (param_2 & 0x7f) * 4) = uVar1;
  }
  return *(undefined4 *)(param_1 + 8 + (param_2 & 0xff) * 4);
}

