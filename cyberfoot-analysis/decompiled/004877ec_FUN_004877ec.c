// Address: 004877ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004877ec(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined4 local_10c;
  undefined1 local_108 [256];
  int local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10c = 0;
  local_8 = 0;
  puStack_11c = &LAB_004878a7;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_0040496c(&local_8,*(undefined4 *)(param_2 + 4));
  uVar4 = 0;
  uVar5 = local_8 == 0;
  if (!(bool)uVar5) {
    uVar2 = FUN_0040a57c(local_8);
    FUN_00403510(local_108,uVar2);
    FUN_004030fc(local_108,&DAT_004878b4);
    if (!(bool)uVar4 && !(bool)uVar5) {
      FUN_00404bac(&local_8,&DAT_004878c0);
    }
  }
  FUN_00487008(param_1,&local_10c);
  uVar2 = FUN_00404da4(local_10c);
  uVar3 = FUN_00404da4(local_8);
  FUN_00487684(param_1,uVar3,uVar2);
  puVar1 = puStack_11c;
  *in_FS_OFFSET = 0x10;
  puStack_11c = &LAB_004878ae;
  uStack_120 = 0x48789e;
  FUN_004048d4(&local_10c,0x10,puVar1);
  uStack_120 = 0x4878a6;
  FUN_004048d4(&local_8);
  return;
}

