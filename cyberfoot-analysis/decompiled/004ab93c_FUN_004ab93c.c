// Address: 004ab93c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ab93c(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  iVar2 = FUN_004aa2e8(param_1);
  local_16 = *(byte *)(iVar2 + 0x460);
  if (8 < local_16) {
    local_16 = 8;
  }
  iVar3 = FUN_004ab7f0(param_1,param_3);
  iVar6 = 8 - (uint)local_16;
  bVar1 = *(byte *)(iVar3 + param_2 / (int)(8 / (ulonglong)local_16)) >>
          (('\b' - local_16) - (char)(param_2 % (int)(8 / (ulonglong)local_16)) * local_16 & 0x1f) &
          (byte)(0xff >> ((byte)iVar6 & 0x1f));
  if (*(char *)(iVar2 + 0x461) == '\0') {
    if (*(char *)(iVar2 + 0x460) == '\x01') {
      local_15 = *(undefined1 *)(param_1 + 0x13d + ((uint)bVar1 * 0xff & 0xff));
    }
    else {
      iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),local_16);
      local_15 = *(undefined1 *)
                  (param_1 + 0x13d +
                  ((ushort)((short)(char)(('\x01' << (local_16 & 0x1f)) + '\x01') *
                           (short)(char)bVar1) & 0xff));
    }
    local_14 = FUN_004080a4(local_15,local_15,CONCAT31((int3)((uint)iVar6 >> 8),local_15));
  }
  else if (*(char *)(iVar2 + 0x461) == '\x03') {
    uVar4 = FUN_004a63c4(*(undefined4 *)(param_1 + 0x138),PTR_PTR_004a5724);
    uVar5 = FUN_004a9980(uVar4,bVar1);
    local_14 = FUN_004080a4(*(undefined1 *)(param_1 + 0x13d + (uVar5 >> 0x10 & 0xff)),
                            *(undefined1 *)(param_1 + 0x13d + (uVar5 >> 8 & 0xff)),
                            *(undefined1 *)(param_1 + 0x13d + (uVar5 & 0xff)));
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

