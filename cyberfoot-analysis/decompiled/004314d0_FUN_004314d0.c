// Address: 004314d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004314d0(int param_1,int *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_43c;
  uint local_438;
  int local_434;
  HGDIOBJ local_430;
  undefined2 local_42c;
  int local_42a;
  int local_422;
  undefined4 local_41e;
  undefined2 local_41a;
  undefined2 local_418;
  undefined2 local_416;
  undefined2 local_414;
  RGBQUAD local_412 [256];
  
  FUN_004032a8(&local_42c,0xe,0);
  local_42c = 0x4d42;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x6c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004304a8(param_1);
    iVar2 = *(int *)(param_1 + 0x28);
    local_43c = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      FUN_0042c7e4(*(int *)(iVar2 + 0x14),&local_434,&local_43c,*(undefined4 *)(iVar2 + 0x50));
      if (*(char *)(iVar2 + 0x70) != '\0') {
        local_434 = 0xc;
        if (*(ushort *)(iVar2 + 0x3e) < 9) {
          local_434 = (1 << ((byte)*(ushort *)(iVar2 + 0x3e) & 0x1f)) * 3 + 0xc;
        }
      }
      local_43c = local_43c + local_434 + 0xe;
      FUN_004032a8(&local_42c,0xe,0);
      local_42c = 0x4d42;
      uVar4 = FUN_00430280(param_1);
      FUN_0042b67c(uVar4,DAT_00431784);
      SelectObject(*(HDC *)(*(int *)(param_1 + 0x2c) + 4),*(HGDIOBJ *)(iVar2 + 0x14));
      local_430 = (HGDIOBJ)FUN_0042b9a0();
      local_438 = GetDIBColorTable(*(HDC *)(*(int *)(param_1 + 0x2c) + 4),0,0x100,local_412);
      SelectObject(*(HDC *)(*(int *)(param_1 + 0x2c) + 4),local_430);
      uVar3 = *(uint *)(iVar2 + 0x50);
      if ((uVar3 != 0) && (uVar3 < local_438)) {
        local_438 = uVar3;
      }
      if ((((*(char *)(iVar2 + 0x70) == '\0') && (local_438 == 0)) && (*(int *)(iVar2 + 0x10) != 0))
         && (*(char *)(iVar2 + 0x71) == '\0')) {
        local_438 = FUN_0042c134(*(undefined4 *)(iVar2 + 0x10),local_412,0xff);
        if (8 < *(ushort *)(iVar2 + 0x3e)) {
          local_43c = local_43c + local_438 * 4;
          local_434 = local_434 + local_438 * 4;
        }
      }
      local_42a = local_43c;
      local_422 = local_434 + 0xe;
    }
    if (param_3 != '\0') {
      FUN_00420b38(param_2,&local_43c,4);
    }
    if (local_43c != 0) {
      FUN_0042f398(iVar2 + 0x18);
      if (local_438 != 0) {
        if ((*(uint *)(iVar2 + 0x50) == 0) || (*(uint *)(iVar2 + 0x50) != local_438)) {
          *(uint *)(iVar2 + 0x50) = local_438;
        }
        if (*(char *)(iVar2 + 0x70) != '\0') {
          FUN_0042be10(local_412,&local_438);
        }
      }
      if (*(char *)(iVar2 + 0x70) == '\0') {
        FUN_00420b38(param_2,&local_42c,0xe);
        FUN_00420b38(param_2,iVar2 + 0x30,0x28);
        if ((8 < *(ushort *)(iVar2 + 0x3e)) && ((*(byte *)(iVar2 + 0x40) & 3) != 0)) {
          FUN_00420b38(param_2,iVar2 + 0x58,0xc);
        }
      }
      else {
        local_41e = 0xc;
        local_41a = *(undefined2 *)(iVar2 + 0x34);
        local_418 = *(undefined2 *)(iVar2 + 0x38);
        local_416 = 1;
        local_414 = *(undefined2 *)(iVar2 + 0x3e);
        FUN_00420b38(param_2,&local_42c,0xe);
        FUN_00420b38(param_2,&local_41e,0xc);
      }
      FUN_00420b38(param_2,local_412,(byte)(&DAT_00662968)[*(byte *)(iVar2 + 0x70)] * local_438);
      FUN_00420b38(param_2,*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x44));
    }
  }
  else {
    local_43c = (**(code **)*puVar1)();
    if (param_3 != '\0') {
      FUN_00420b38(param_2,&local_43c,4);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x6c);
    uVar4 = (**(code **)*puVar1)();
    (**(code **)(*param_2 + 0x10))(param_2,puVar1[1],uVar4);
  }
  return;
}

