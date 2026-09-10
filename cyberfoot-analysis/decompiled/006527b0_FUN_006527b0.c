// Address: 006527b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006527b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130);
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') {
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130) < 9) {
      uVar1 = 8;
    }
    else {
      uVar1 = 10;
    }
  }
  return uVar1;
}

