// Address: 0047ac64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047ac64(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  if (-1 < *(int *)(param_4 + -4)) {
    iVar3 = *(int *)(param_4 + -4) + 1;
    puVar2 = *(uint **)(param_4 + -8);
    do {
      if ((uint)*(byte *)(param_1 + 0x3f) == *puVar2) {
        piVar1 = (int *)(*(int *)(param_4 + 0xc) + (uint)*(byte *)(param_1 + 0x3f) * 4);
        *piVar1 = *piVar1 + 1;
        FUN_00476bd0(param_1,*(undefined4 *)(param_4 + -0xc),*(undefined1 *)(param_4 + -0xd));
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

