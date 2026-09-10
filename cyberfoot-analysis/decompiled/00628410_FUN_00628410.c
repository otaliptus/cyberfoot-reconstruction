// Address: 00628410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00628410(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_006d4940 + 0xc4 + param_2 * 200);
  iVar2 = (iVar1 * 0xf) / 100;
  iVar2 = FUN_00402c38(iVar2,(iVar1 * 0xf) % 100,100,iVar2);
  iVar3 = (iVar1 * 0x4b) / 100;
  iVar3 = FUN_00402c38(iVar3,(iVar1 * 0x4b) % 100,100,iVar3);
  iVar4 = (iVar1 * 9) / 100;
  iVar4 = FUN_00402c38(iVar4,(iVar1 * 9) % 100,100,iVar4);
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x204 + param_2 * 0x2f8) = iVar2;
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x208 + param_2 * 0x2f8) = iVar3;
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x20c + param_2 * 0x2f8) = iVar4;
  *(int *)(*(int *)PTR_DAT_0066af70 + 0x210 + param_2 * 0x2f8) = iVar1 - (iVar3 + iVar2 + iVar4);
  return;
}

