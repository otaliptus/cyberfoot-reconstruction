// Address: 004f1cdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1cdc(int param_1,int param_2,char param_3,int *param_4,char param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  byte bVar10;
  float10 in_ST0;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  byte local_3c [32];
  double local_1c;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  bVar10 = 0;
  puStack_4c = (undefined1 *)0x4f1cf9;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_2);
  puStack_50 = &LAB_004f1e6b;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  iVar6 = 1;
  bVar2 = true;
  local_e = '\0';
  puStack_4c = &stack0xfffffffc;
  do {
    puVar7 = &DAT_004f1e7c;
    pbVar8 = local_3c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pbVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pbVar8 = pbVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    local_3c[(int)(uint)(byte)*PTR_DAT_0066b70c >> 3] =
         local_3c[(int)(uint)(byte)*PTR_DAT_0066b70c >> 3] | '\x01' << ((byte)*PTR_DAT_0066b70c & 7)
    ;
    uVar4 = (uint)*(byte *)(local_c + -1 + iVar6);
    if ((local_3c[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) == 0) {
      FUN_00404e44(&local_c,iVar6,1);
    }
    else {
      if (*(char *)(local_c + -1 + iVar6) == *PTR_DAT_0066b70c) {
        if ((local_d == '\0') || (local_e != '\0')) {
          FUN_00404e44(&local_c,iVar6,1);
          bVar2 = false;
        }
        if (local_e == '\0') {
          local_e = '\x01';
        }
      }
      cVar1 = *(char *)(local_c + -1 + iVar6);
      if (((cVar1 == '+') || (cVar1 == '-')) && ((param_5 == '\0' || (1 < iVar6)))) {
        FUN_00404e44(&local_c,iVar6,1);
        bVar2 = false;
      }
      if (bVar2) {
        iVar6 = iVar6 + 1;
      }
      else if ((bool)(bVar2 ^ 1)) {
        bVar2 = true;
      }
    }
    iVar5 = FUN_00404ba4(local_c);
    bVar9 = iVar6 == iVar5 + 1;
  } while (!bVar9);
  FUN_00404cf0(local_c,&DAT_004f1ea4);
  if (!bVar9) {
    FUN_00404cf0(local_c,&DAT_004f1eb0);
    if (!bVar9) goto LAB_004f1e08;
  }
  FUN_0040496c(&local_c,&DAT_004f1ebc);
LAB_004f1e08:
  FUN_00404928(param_4,local_c);
  if (*param_4 == 0) {
    local_1c = *(double *)(local_8 + 0x260);
  }
  else {
    FUN_0040beb0(*param_4);
    local_1c = (double)in_ST0;
    FUN_004f1bbc(local_8,&local_1c);
  }
  FUN_0040bdc0(param_4);
  puVar3 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_004f1e72;
  puStack_50 = (undefined1 *)0x4f1e6a;
  FUN_004048d4(&local_c,uStack_54,puVar3);
  return;
}

