// Address: 0046d628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0046d628(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_11 = 1;
  puStack_4c = (undefined1 *)0x46d646;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  cVar3 = FUN_0046cde4(param_1);
  if ((cVar3 != '\0') && (*(char *)((int)local_8 + 0x5b) != '\x05')) {
    if ((*(byte *)(local_8 + 7) & 0x10) != 0) {
      puStack_4c = (undefined1 *)0x46d66c;
      iVar5 = FUN_00469730(local_8);
      if (iVar5 < 1) {
        return local_11;
      }
    }
    puStack_4c = (undefined1 *)0x46d682;
    (**(code **)(*local_8 + 0xb4))(local_8,&local_2c);
    puStack_4c = (undefined1 *)0x46d68d;
    (**(code **)(*local_8 + 0x44))(local_8,&local_3c);
    puStack_4c = (undefined1 *)0x46d69b;
    (**(code **)(*local_8 + 0x8c))(local_8,&local_3c);
    puStack_4c = (undefined1 *)0x46d6a3;
    FUN_00469298(local_8);
    puStack_50 = &LAB_0046d757;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    iVar5 = FUN_00469730(local_8);
    if (-1 < iVar5 + -1) {
      local_18 = 0;
      do {
        piVar6 = (int *)FUN_004696f4(local_8,local_18);
        if ((*(char *)((int)piVar6 + 0x57) != '\0') ||
           (((*(byte *)(piVar6 + 7) & 0x10) != 0 && ((*(byte *)((int)piVar6 + 0x51) & 4) == 0)))) {
          bVar1 = *(byte *)((int)local_8 + 0x5b);
          if ((bVar1 == 0) || ((byte)(bVar1 - 3) < 2)) {
            iVar7 = local_2c - local_3c;
          }
          else {
            iVar7 = 0;
          }
          if (bVar1 < 3) {
            local_1c = local_28 - local_38;
          }
          else {
            local_1c = 0;
          }
          (**(code **)(*piVar6 + 0x84))
                    (piVar6,piVar6[0x10] - iVar7,piVar6[0x11] - local_1c,piVar6[0x13],piVar6[0x12]);
        }
        local_18 = local_18 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar2 = puStack_4c;
    *in_FS_OFFSET = uStack_54;
    puStack_4c = &DAT_0046d75e;
    *(ushort *)(local_8 + 0x15) = *(ushort *)(local_8 + 0x15) & 0xffef;
    puStack_50 = (undefined1 *)0x46d756;
    uVar4 = FUN_004692a0(local_8,uStack_54,puVar2);
    return uVar4;
  }
  return local_11;
}

