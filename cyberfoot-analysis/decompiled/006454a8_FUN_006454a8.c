// Address: 006454a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006454a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b058;
  iVar2 = FUN_0064dee4(param_1,param_2,1,0xffffffff,0xffffffff);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  if (-1 < iVar3) {
    do {
      if (((*(int *)(*(int *)puVar1 + iVar3 * 0x14) == param_3) &&
          (iVar2 == *(int *)(*(int *)puVar1 + 4 + iVar3 * 0x14))) &&
         (*(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x14) == 1)) {
        return *(undefined4 *)(*(int *)puVar1 + 8 + iVar3 * 0x14);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0xffffffff;
}

