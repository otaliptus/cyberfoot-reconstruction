// Address: 004afac4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004afac4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0;
  puStack_28 = (undefined1 *)0x4afae5;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_2c = &LAB_004afbba;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (param_7 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_7 + 4);
  }
  if (param_5 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(param_5 + 4);
  }
  if (param_4 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(undefined4 *)(param_4 + 4);
  }
  puStack_28 = &stack0xfffffffc;
  iVar2 = FUN_00405260(local_8);
  uVar3 = FUN_004027fc(iVar2 * 2 + 2);
  FUN_004032a8(uVar3,iVar2 * 2 + 2,0);
  FUN_00404b6c(&local_18,local_8);
  FUN_00405b9c(local_18,uVar3,iVar2 * 2 + 2);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar5 = local_c;
  uVar6 = local_10;
  uVar7 = local_14;
  uVar4 = GdipDrawString();
  FUN_004afbd0(param_1,uVar4);
  FUN_0040281c(uVar3);
  *in_FS_OFFSET = uVar1;
  FUN_004048d4(&local_18,uVar1,iVar2,&LAB_004afbc1,uVar5,param_6,uVar6,uVar7);
  FUN_00404ff0(&local_8);
  return;
}

