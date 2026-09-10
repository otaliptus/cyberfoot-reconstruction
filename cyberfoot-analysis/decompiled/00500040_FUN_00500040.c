// Address: 00500040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00500040(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_20 [16];
  
  iVar6 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar5 = FUN_00402c38();
  for (; iVar5 + iVar6 < iVar2; iVar6 = iVar6 + iVar5 + 2) {
    iVar4 = *(int *)(param_1 + 0x20);
    FUN_0042ab6c(*(undefined4 *)(iVar4 + 0x14),param_3);
    FUN_0041c990(iVar6,iVar1,iVar5 + iVar6,local_20,iVar3);
    FUN_0042af8c(iVar4,local_20);
  }
  return;
}

