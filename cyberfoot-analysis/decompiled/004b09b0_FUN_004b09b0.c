// Address: 004b09b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b09b0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  ushort local_10;
  ushort local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_c = 0;
  puStack_20 = (undefined1 *)0x4b09cd;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_24 = &LAB_004b0b10;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') goto LAB_004b0aed;
  iVar3 = (*(code *)**(undefined4 **)param_1[0xb])();
  if ((extraout_EDX == 0) && (iVar3 == 0)) goto LAB_004b0aed;
  uVar4 = 0;
  FUN_0040a668(local_8,&local_14);
  FUN_004095b0(local_14,&local_c);
  FUN_00404cf0(local_c,&DAT_004b0b28);
  if ((bool)uVar4) {
LAB_004b0a35:
    FUN_004afc2c(local_8,&local_e,&local_10);
  }
  else {
    FUN_00404cf0(local_c,".JPEG");
    if ((bool)uVar4) goto LAB_004b0a35;
    FUN_00404cf0(local_c,&DAT_004b0b48);
    if ((bool)uVar4) {
      FUN_004afd8c(local_8,&local_e,&local_10);
    }
    else {
      FUN_00404cf0(local_c,&DAT_004b0b58);
      if ((bool)uVar4) {
        FUN_004b000c(local_8,&local_e,&local_10);
      }
      else {
        FUN_00404cf0(local_c,".TIFF");
        if (!(bool)uVar4) {
          FUN_00404cf0(local_c,&DAT_004b0b78);
          if (!(bool)uVar4) {
            FUN_00404cf0(local_c,&DAT_004b0b88);
            if ((bool)uVar4) {
              FUN_004afe58(local_8,&local_e,&local_10);
            }
            else {
              local_e = 0;
              local_10 = 0;
            }
            goto LAB_004b0adf;
          }
        }
        FUN_004b0230(local_8,&local_e,&local_10);
      }
    }
  }
LAB_004b0adf:
  param_1[0xd] = (uint)local_e;
  param_1[0xe] = (uint)local_10;
LAB_004b0aed:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004b0b17;
  puStack_24 = (undefined1 *)0x4b0b02;
  FUN_004048d4(&local_14,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x4b0b0f;
  FUN_004048f8(&local_c,2);
  return;
}

