// Address: 0049c618
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049c618(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x168);
  uVar2 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_0049c2b8(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x10c); iVar4 = iVar4 + 1) {
    FUN_0049c140(iVar1,(int)*(short *)*param_2 >> ((byte)uVar2 & 0x1f),1);
    param_2 = param_2 + 1;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  *puVar3 = *(undefined4 *)(iVar1 + 0x10);
  puVar3[1] = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = *(int *)(param_1 + 0xc4);
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}

