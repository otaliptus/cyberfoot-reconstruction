// Address: 004af67c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004af67c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;
  
  puStack_1c = (undefined1 *)0x4af69b;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_20 = &LAB_004af708;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_9 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_9 + 4);
  }
  if (param_7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_7 + 4);
  }
  puStack_1c = &stack0xfffffffc;
  FUN_00405250(local_8);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = GdipMeasureString();
  FUN_004afbd0(param_1,uVar2);
  *in_FS_OFFSET = uVar1;
  FUN_00404ff0(&local_8,uVar1,param_3,&LAB_004af70f,uVar3,param_8,uVar4,param_6,param_5,param_4);
  return;
}

