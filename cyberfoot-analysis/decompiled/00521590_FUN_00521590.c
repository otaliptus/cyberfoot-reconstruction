// Address: 00521590
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00521590(int param_1,char param_2,undefined4 param_3,undefined2 param_4,undefined4 *param_5,
                undefined4 param_6)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  char extraout_DL;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined4 auStackY_1800 [1512];
  undefined1 *puVar11;
  undefined4 uStack_50;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 auStack_20 [4];
  byte local_d;
  undefined4 local_c;
  char local_5;
  
  bVar10 = 0;
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puVar8 = param_5 + (uint)bVar10 * -2 + 1;
  local_24 = *param_5;
  auStack_20[(uint)bVar10 * -2] = *puVar8;
  auStack_20[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = puVar8[(uint)bVar10 * -2 + 1];
  (auStack_20 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
       (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  FUN_004269f0(param_1,0,1);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(int *)(param_1 + 0x1c) = param_1;
  *(code **)(param_1 + 0x18) = FUN_00521904;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  puVar8 = (undefined4 *)(param_1 + 0x4c + (uint)bVar10 * -8);
  *(undefined4 *)(param_1 + 0x48) = local_24;
  puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
  *puVar8 = auStack_20[(uint)bVar10 * -2];
  *puVar9 = auStack_20[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  puVar9[(uint)bVar10 * -2 + 1] =
       (auStack_20 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x58) = param_4;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x5c);
  if ((~*(ushort *)(param_1 + 0x58) & _DAT_00521880) == 0) {
    iVar1 = FUN_0051aad8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c));
    if ((1 < iVar1) && (-1 < *(int *)(param_1 + 0x5c))) {
      pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)(param_1 + 0x80) = pvVar2;
    }
  }
  local_d = DAT_00521884;
  if (*(int *)(*(int *)(param_1 + 0x40) + 100) == 0x1fffffff) {
    iVar1 = FUN_00524230(*(int *)(param_1 + 0x40));
    if (*(int *)(iVar1 + 8) < 1) {
      local_c = FUN_00429e64(0xff000005);
    }
    else {
      local_c = FUN_00522950(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    local_c = FUN_00429e64();
  }
  if ((*(byte *)(param_1 + 0x58) & 0x80) != 0) {
    local_d = local_d | 4;
  }
  iVar1 = FUN_0051aad8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c));
  if (-1 < iVar1 + -1) {
    iVar7 = 0;
    do {
      iVar3 = FUN_005212bc(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c),iVar7);
      if (*(int *)(iVar3 + 0x38) != 0) {
        iVar3 = FUN_005212bc(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c),iVar7);
        auStack_20[3] = *(undefined4 *)(iVar3 + 0x38);
        uVar4 = FUN_005207dc(auStack_20[3]);
        if ((byte)uVar4 < 8) {
          (&local_d)[(int)(uVar4 & 0x7f) >> 3] =
               (&local_d)[(int)(uVar4 & 0x7f) >> 3] | '\x01' << (uVar4 & 7);
        }
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (((local_d & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) {
    piVar5 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    *(int **)(param_1 + 0x70) = piVar5;
    (**(code **)(*piVar5 + 0x34))(piVar5,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x70) + 0x40))
              (*(int **)(param_1 + 0x70),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(iVar1 + 0x20) = 0xcc0020;
    iVar1 = param_1 + 0x48;
    uVar6 = FUN_00430280(*(undefined4 *)(param_1 + 0x70));
    FUN_0042b584(uVar6,local_34);
    puVar11 = local_34;
    uVar6 = FUN_00430280(*(undefined4 *)(param_1 + 0x70));
    FUN_0042addc(uVar6,puVar11,*(undefined4 *)(param_1 + 0x44),iVar1);
  }
  if (DAT_00521884 != (DAT_00521888 & local_d)) {
    piVar5 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    *(int **)(param_1 + 0x68) = piVar5;
    (**(code **)(*piVar5 + 0x34))(piVar5,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x68) + 0x40))
              (*(int **)(param_1 + 0x68),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(iVar1 + 0x20) = 0xcc0020;
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x68));
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),local_c);
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x68));
    FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),0);
    iVar1 = param_1 + 0x48;
    uVar6 = FUN_00430280(*(undefined4 *)(param_1 + 0x68));
    FUN_0042b584(uVar6,local_34);
    puVar11 = local_34;
    uVar6 = FUN_00430280(*(undefined4 *)(param_1 + 0x68));
    FUN_0042addc(uVar6,puVar11,*(undefined4 *)(param_1 + 0x44),iVar1);
    piVar5 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    *(int **)(param_1 + 0x6c) = piVar5;
    (**(code **)(*piVar5 + 0x34))(piVar5,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x40))
              (*(int **)(param_1 + 0x6c),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(iVar1 + 0x20) = 0xcc0020;
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x6c));
    FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),local_c);
    iVar1 = FUN_00430280(*(undefined4 *)(param_1 + 0x6c));
    FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),0);
  }
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_50;
  }
  return param_1;
}

