// Address: 00648c98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00648c98(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 auStack_188 [14];
  undefined4 uStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 local_12c;
  undefined1 local_128 [4];
  undefined1 local_124 [88];
  undefined1 local_cc [4];
  undefined1 local_c8 [88];
  undefined1 local_70 [4];
  undefined1 local_6c [88];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_12c = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_13c = (undefined1 *)0x648cd5;
  local_8 = param_3;
  FUN_00405658(local_128,PTR_DAT_00488a60,3);
  puStack_140 = &LAB_00648e3a;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puStack_148 = (undefined4 *)0x648cf3;
  puStack_13c = &stack0xfffffffc;
  FUN_0040496c(local_128,&DAT_00648e54);
  puStack_148 = (undefined4 *)0x648d03;
  FUN_0040496c(local_124,&DAT_00648e60);
  puStack_148 = (undefined4 *)0x648d13;
  FUN_0040496c(local_cc,&DAT_00648e6c);
  puStack_148 = (undefined4 *)0x648d23;
  FUN_0040496c(local_c8,&DAT_00648e78);
  puStack_148 = (undefined4 *)0x648d30;
  FUN_0040496c(local_70,&DAT_00648e84);
  puStack_148 = (undefined4 *)0x648d3d;
  FUN_0040496c(local_6c,&DAT_00648e90);
  puStack_148 = (undefined4 *)0x648d56;
  FUN_0040496c(&local_c,auStack_188[param_1 * 0x17 + local_8]);
  puStack_148 = &local_10;
  puStack_14c = &local_12c;
  uStack_150 = 0x648d6e;
  uVar3 = FUN_00404ee8(&DAT_00648e9c,local_c);
  uStack_150 = 0x648d7d;
  FUN_00404e04(local_c,1,uVar3);
  puStack_14c = (undefined4 *)0x648d88;
  iVar4 = FUN_00404ba4(local_12c);
  puStack_14c = (undefined4 *)0x648d98;
  FUN_00404e04(local_c,1,iVar4 + -1);
  puStack_148 = &local_14;
  puStack_14c = (undefined4 *)0x648da9;
  puStack_14c = (undefined4 *)FUN_00404ee8(&DAT_00648e9c,local_c);
  uStack_150 = 0x648db2;
  iVar4 = FUN_00404ba4(local_c);
  puStack_14c = (undefined4 *)(iVar4 - (int)puStack_14c);
  uStack_150 = 0x648dc3;
  iVar4 = FUN_00404ee8(&DAT_00648e9c,local_c);
  puVar1 = puStack_14c;
  puStack_14c = (undefined4 *)0x648dcf;
  FUN_00404e04(local_c,iVar4 + 1,puVar1);
  if (param_2 == 1) {
    puStack_148 = (undefined4 *)0x648dda;
    uVar3 = FUN_00409ff8(local_10);
    *param_4 = uVar3;
    puStack_148 = (undefined4 *)0x648de4;
    uVar3 = FUN_00409ff8(local_14);
    param_4[1] = uVar3;
  }
  else {
    puStack_148 = (undefined4 *)0x648df1;
    uVar3 = FUN_00409ff8(local_14);
    *param_4 = uVar3;
    puStack_148 = (undefined4 *)0x648dfb;
    uVar3 = FUN_00409ff8(local_10);
    param_4[1] = uVar3;
  }
  puVar2 = puStack_13c;
  *in_FS_OFFSET = uStack_144;
  puStack_13c = &LAB_00648e41;
  puStack_140 = (undefined1 *)0x648e16;
  FUN_004048d4(&local_12c,uStack_144,puVar2);
  puStack_140 = (undefined1 *)0x648e2c;
  FUN_00405744(local_128,PTR_DAT_00488a60,3);
  puStack_140 = (undefined1 *)0x648e39;
  FUN_004048f8(&local_14,3);
  return;
}

