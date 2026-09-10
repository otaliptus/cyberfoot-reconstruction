// Address: 004af8c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004af8c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                 int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_24 = 0;
  puStack_34 = (undefined1 *)0x4af8e9;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_38 = &LAB_004af9c0;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_20 = *param_5;
  local_1c = param_5[1];
  local_18 = 0;
  local_14 = 0;
  if (param_6 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_6 + 4);
  }
  if (param_4 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(param_4 + 4);
  }
  puStack_34 = &stack0xfffffffc;
  iVar2 = FUN_00405260(local_8);
  uVar3 = FUN_004027fc(iVar2 * 2 + 2);
  FUN_004032a8(uVar3,iVar2 * 2 + 2,0);
  FUN_00404b6c(&local_24,local_8);
  FUN_00405b9c(local_24,uVar3,iVar2 * 2 + 2);
  uVar7 = 0;
  puVar6 = &local_20;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar5 = local_c;
  uVar8 = local_10;
  uVar4 = GdipDrawString();
  FUN_004afbd0(param_1,uVar4);
  FUN_0040281c(uVar3);
  *in_FS_OFFSET = uVar1;
  FUN_004048d4(&local_24,uVar1,iVar2,&LAB_004af9c7,uVar5,puVar6,uVar7,uVar8);
  FUN_00404ff0(&local_8);
  return;
}

