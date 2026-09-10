// Address: 0054eaf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054eaf4(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_1c = *param_3;
  local_18 = param_3[1];
  local_14 = param_3[2];
  local_10 = param_3[3];
  puStack_38 = &LAB_0054ec36;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x54eb29;
  local_c = FUN_0042fcb8(PTR_LAB_0054e644,1);
  puStack_44 = &LAB_0054ec19;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_0054e740(local_c,param_2);
  FUN_0054eaa0(param_1,local_c);
  puVar7 = &local_8;
  local_24 = FUN_0054e8d4(param_1);
  local_20 = 0;
  FUN_0040ae64(&DAT_0054ec4c,&local_24,0,puVar7);
  iVar2 = FUN_00430280(local_c);
  FUN_0042ac88(*(undefined4 *)(iVar2 + 0x14),1);
  FUN_0042b4a4(iVar2,*(undefined4 *)(param_1 + 0x68));
  FUN_0042a3a0(*(undefined4 *)(iVar2 + 0xc),0xffffff);
  iVar3 = FUN_0042b3e4(iVar2,local_8);
  uVar6 = ((local_14 - local_1c) + 1) - iVar3;
  iVar3 = (int)uVar6 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar6 & 1) != 0);
  }
  iVar4 = FUN_0042b400(iVar2,local_8);
  uVar6 = ((local_10 - local_18) + 1) - iVar4;
  iVar4 = (int)uVar6 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar6 & 1) != 0);
  }
  FUN_0042b300(iVar2,&local_1c,iVar3,local_8,iVar4);
  iVar2 = FUN_00430280(param_2);
  *(undefined4 *)(iVar2 + 0x20) = 0x660046;
  uVar8 = local_c;
  uVar5 = FUN_00430280(param_2);
  FUN_0042ae64(uVar5,0,0,uVar8);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0054ec20;
  puStack_44 = (undefined1 *)0x54ec18;
  FUN_00403a84(local_c,uStack_48,puVar1);
  return;
}

