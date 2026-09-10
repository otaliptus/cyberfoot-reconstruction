// Address: 0058436c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0058436c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((0 < *(int *)(param_1 + 0x48)) && (0 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x218);
    *(int *)(param_1 + 400) = iVar1;
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x48) - iVar1;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 400);
    if ((0 < *(int *)(param_1 + 0x198) - *(int *)(param_1 + 400)) &&
       (0 < *(int *)(param_1 + 0x194) - *(int *)(param_1 + 400))) {
      iVar1 = *(int *)(param_1 + 0x214) * 2 + *(int *)(param_1 + 0x218);
      *(int *)(param_1 + 0x184) = iVar1;
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x48) - iVar1;
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x184);
      if ((0 < *(int *)(param_1 + 0x18c) - *(int *)(param_1 + 0x184)) &&
         (0 < *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x184))) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

