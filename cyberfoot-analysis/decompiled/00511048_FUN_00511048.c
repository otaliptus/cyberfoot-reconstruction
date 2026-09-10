// Address: 00511048
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511048(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_2c [12];
  int local_20;
  undefined1 local_1c [12];
  int local_10;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar5 = param_2[3];
  iVar4 = FUN_0050f404(param_1,3);
  iVar4 = iVar4 + iVar5;
  puVar8 = local_2c;
  iVar5 = FUN_0050f404(param_1,2);
  iVar6 = FUN_0050f404(param_1,1);
  iVar7 = FUN_0050f404(param_1,0);
  FUN_0040709c(iVar1 - iVar7,iVar2 - iVar6,iVar5 + iVar3,puVar8,iVar4);
  FUN_0050f004(param_1,local_1c);
  if (local_10 < local_20) {
    FUN_0050f004(param_1,local_1c);
    local_20 = local_10;
  }
  FUN_004e55c0(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 0x208),local_2c);
  return;
}

