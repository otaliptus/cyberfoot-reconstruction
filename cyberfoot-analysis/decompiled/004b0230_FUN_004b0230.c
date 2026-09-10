// Address: 004b0230
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b0230(undefined4 param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  short local_30 [4];
  int local_28;
  int local_24;
  ushort local_1a;
  undefined1 local_18 [8];
  int *local_10;
  short *local_c;
  short *local_8;
  
  *param_2 = 0;
  *param_3 = 0;
  local_24 = -1;
  puStack_40 = (undefined1 *)0x0;
  puStack_44 = (undefined1 *)0x4b026b;
  local_c = param_3;
  local_8 = param_2;
  local_10 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,param_1);
  puStack_44 = &LAB_004b0320;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0xc))(local_10,local_18,8);
  FUN_004208f4(local_10);
  (**(code **)(*local_10 + 0xc))(local_10,&local_1a,2);
  uVar4 = (uint)local_1a;
  iVar2 = -1;
  do {
    if (uVar4 == 0) {
LAB_004b030a:
      puVar3 = puStack_40;
      *in_FS_OFFSET = uStack_48;
      puStack_40 = &LAB_004b0327;
      puStack_44 = (undefined1 *)0x4b031f;
      FUN_0040fe60(&local_10,uStack_48,puVar3);
      return;
    }
    (**(code **)(*local_10 + 0xc))(local_10,local_30,0xc);
    iVar5 = local_28;
    if ((local_30[0] != 0x100) && (iVar5 = iVar2, local_30[0] == 0x101)) {
      local_24 = local_28;
    }
    if ((iVar5 != -1) && (local_24 != -1)) {
      uVar1 = (ushort)(iVar5 >> 0x1f);
      *local_8 = ((ushort)iVar5 ^ uVar1) - uVar1;
      uVar1 = (ushort)(local_24 >> 0x1f);
      *local_c = ((ushort)local_24 ^ uVar1) - uVar1;
      goto LAB_004b030a;
    }
    uVar4 = uVar4 - 1;
    iVar2 = iVar5;
  } while( true );
}

