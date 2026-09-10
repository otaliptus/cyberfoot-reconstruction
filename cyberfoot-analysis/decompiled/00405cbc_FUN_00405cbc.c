// Address: 00405cbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x00405db1) */

uint FUN_00405cbc(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint local_1c;
  uint local_18;
  bool local_14;
  
  iVar7 = 1;
  local_1c = 0;
  local_18 = 0;
  if (param_1 == 0) {
    *param_2 = 1;
    return 0;
  }
  for (; *(char *)(param_1 + -1 + iVar7) == ' '; iVar7 = iVar7 + 1) {
  }
  local_14 = false;
  cVar3 = *(char *)(param_1 + -1 + iVar7);
  if (cVar3 == '-') {
    local_14 = true;
    iVar7 = iVar7 + 1;
  }
  else if (cVar3 == '+') {
    iVar7 = iVar7 + 1;
  }
  bVar2 = 1;
  if (((*(char *)(param_1 + -1 + iVar7) == '$') ||
      (cVar3 = FUN_00402bb8(*(undefined1 *)(param_1 + -1 + iVar7)), cVar3 == 'X')) ||
     ((uVar6 = extraout_ECX, *(char *)(param_1 + -1 + iVar7) == '0' &&
      (cVar3 = FUN_00402bb8(*(undefined1 *)(param_1 + iVar7)), uVar6 = extraout_ECX_00, cVar3 == 'X'
      )))) {
    if (*(char *)(param_1 + -1 + iVar7) == '0') {
      iVar7 = iVar7 + 1;
    }
    do {
      iVar7 = iVar7 + 1;
      bVar1 = *(byte *)(param_1 + -1 + iVar7);
      if ((byte)(bVar1 - 0x30) < 10) {
        uVar8 = bVar1 - 0x30;
      }
      else if ((byte)(bVar1 + 0xbf) < 6) {
        uVar8 = bVar1 - 0x37;
      }
      else {
        if (5 < (byte)(bVar1 + 0x9f)) goto LAB_00405de3;
        uVar8 = bVar1 - 0x57;
      }
      if (((local_18 != 0) && ((int)local_18 < 0)) ||
         ((local_18 != 0xfffffff && (0xfffffff < (int)local_18)))) goto LAB_00405de3;
      uVar5 = local_1c >> 0x1c;
      uVar4 = local_1c * 0x10;
      local_1c = uVar4 + uVar8;
      local_18 = (local_18 << 4 | uVar5) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar4,uVar8);
      bVar2 = 0;
    } while( true );
  }
  for (; bVar1 = *(byte *)(param_1 + -1 + iVar7), (byte)(bVar1 - 0x30) < 10; iVar7 = iVar7 + 1) {
    uVar8 = bVar1 - 0x30;
    if ((local_18 != 0) && ((int)local_18 < 0)) break;
    if (local_18 == 0xccccccc) {
      if (0xcccccccc < local_1c) break;
    }
    else if (0xccccccc < (int)local_18) break;
    uVar5 = FUN_00405c1c(local_1c,local_18,uVar6,10,0);
    local_1c = uVar8 + uVar5;
    local_18 = ((int)uVar8 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar8,uVar5);
    bVar2 = 0;
    uVar6 = extraout_ECX_01;
  }
  if (local_14 != false) {
    bVar9 = local_1c != 0;
    local_1c = -local_1c;
    local_18 = -(local_18 + bVar9);
  }
  if ((local_18 != 0 || local_1c != 0) && (0x7fffffff < local_18 != local_14)) {
    iVar7 = iVar7 + -1;
  }
LAB_00405ec1:
  if ((bool)(bVar2 | *(char *)(param_1 + -1 + iVar7) != '\0')) {
    *param_2 = iVar7;
  }
  else {
    *param_2 = 0;
  }
  return local_1c;
LAB_00405de3:
  if (local_14 != false) {
    local_1c = -local_1c;
  }
  goto LAB_00405ec1;
}

