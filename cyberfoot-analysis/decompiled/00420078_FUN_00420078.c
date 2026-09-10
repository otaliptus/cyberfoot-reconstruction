// Address: 00420078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420078(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  byte *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004201c7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x4200a4;
  local_8 = param_1;
  FUN_0041f308(param_1);
  puStack_30 = &LAB_004201aa;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x44))();
  for (local_c = (byte *)FUN_00404da4(param_2); (byte)(*local_c - 1) < 0x20;
      local_c = (byte *)CharNextA((LPCSTR)local_c)) {
  }
  while (puVar1 = puStack_2c, bVar4 = *local_c, bVar4 != 0) {
    bVar3 = FUN_004201f0(local_8);
    pbVar2 = local_c;
    if (bVar4 == bVar3) {
      uVar5 = FUN_004201f0(local_8);
      FUN_00409a60(&local_c,uVar5,&local_10);
    }
    else {
      for (; (bVar4 = *local_c, 0x20 < bVar4 && (bVar3 = FUN_004201d8(local_8), bVar4 != bVar3));
          local_c = (byte *)CharNextA((LPCSTR)local_c)) {
      }
      FUN_004049c4(&local_10,pbVar2,(int)local_c - (int)pbVar2);
    }
    (**(code **)(*local_8 + 0x38))(local_8,local_10);
    for (; (byte)(*local_c - 1) < 0x20; local_c = (byte *)CharNextA((LPCSTR)local_c)) {
    }
    bVar4 = FUN_004201d8(local_8);
    if (bVar4 == *local_c) {
      pCVar6 = CharNextA((LPCSTR)local_c);
      if (*pCVar6 == '\0') {
        (**(code **)(*local_8 + 0x38))(local_8,0);
      }
      do {
        local_c = (byte *)CharNextA((LPCSTR)local_c);
      } while ((byte)(*local_c - 1) < 0x20);
    }
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004201b1;
  puStack_30 = (undefined1 *)0x4201a9;
  FUN_0041f3c4(local_8,uStack_34,puVar1);
  return;
}

