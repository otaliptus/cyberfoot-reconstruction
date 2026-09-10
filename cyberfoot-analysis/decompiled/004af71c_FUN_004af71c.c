// Address: 004af71c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004af71c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = (undefined1 *)0x4af735;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_1c = &LAB_004af791;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_6 + 4);
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  puStack_18 = &stack0xfffffffc;
  FUN_00405250(local_8);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = GdipMeasureString();
  FUN_004afbd0(param_1,uVar2);
  *in_FS_OFFSET = uVar1;
  FUN_00404ff0(&local_8,uVar1,param_3,&LAB_004af798,uVar3,param_5,uVar4,param_4,uVar5,uVar6);
  return;
}

