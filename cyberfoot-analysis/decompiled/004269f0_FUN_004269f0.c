// Address: 004269f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004269f0(int param_1,char param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD DVar3;
  undefined1 extraout_CL;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_5;
  
  local_14 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x426a09;
    param_1 = FUN_00403de8();
    local_5 = extraout_DL;
    param_3 = extraout_CL;
  }
  puStack_34 = &LAB_00426a9a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00403a54(param_1,0);
  FUN_00426790();
  *(undefined1 *)(param_1 + 0xe) = param_3;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  iVar2 = FUN_00404888(0,0,FUN_00426948,param_1 + 8,4,param_1);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    FUN_0040db5c(DVar3,&local_14);
    local_10 = local_14;
    local_c = 0xb;
    FUN_0040e468(PTR_DAT_0041c4ec,1,PTR_PTR_0066b650,0,&local_10);
    FUN_00404250();
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00426aa1;
  puStack_34 = (undefined1 *)0x426a99;
  FUN_004048d4(&local_14,uStack_38,puVar1);
  return;
}

