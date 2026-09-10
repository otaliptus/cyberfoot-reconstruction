// Address: 0052a1e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052a1e4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_40 = 0;
  local_34 = 0;
  local_38 = 0;
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  puStack_50 = (undefined1 *)0x52a212;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_6);
  puStack_54 = &LAB_0052a32f;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  uVar10 = 0;
  puStack_50 = &stack0xfffffffc;
  FUN_0042a5b0(param_5,&local_38);
  FUN_004051d4(&local_34,local_38);
  uVar10 = FUN_004b134c(PTR_DAT_004addd4,1,local_34,uVar10);
  uVar1 = FUN_0042a660(param_5);
  cVar4 = (uVar1 & 1) != 0;
  uVar1 = FUN_0042a660(param_5);
  if ((uVar1 & 2) != 0) {
    cVar4 = cVar4 + '\x02';
  }
  uVar1 = FUN_0042a660(param_5);
  if ((uVar1 & 4) != 0) {
    cVar4 = cVar4 + '\x04';
  }
  FUN_0052a138(local_8,&local_20,local_30);
  local_10 = FUN_004aebc4(PTR_DAT_004ae0a8,1,0,0);
  local_3c = FUN_0042a624(param_5);
  uVar2 = FUN_004b140c(PTR_DAT_004ade30,1,uVar10,3,cVar4,(float)local_3c);
  puVar8 = local_30;
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = local_10;
  uVar9 = uVar2;
  uVar3 = FUN_00404ba4(param_6);
  FUN_004051d4(&local_40,param_6);
  FUN_004af67c(local_c,local_40,uVar3,uVar5,uVar6,param_4,uVar7,puVar8,uVar9);
  FUN_00403a84(uVar10);
  FUN_00403a84(local_10);
  FUN_00403a84(uVar2);
  *in_FS_OFFSET = uVar5;
  FUN_00404ff0(&local_40,uVar5,param_4,&LAB_0052a336);
  FUN_004048d4(&local_38);
  FUN_00404ff0(&local_34);
  FUN_004048d4(&param_6);
  return;
}

