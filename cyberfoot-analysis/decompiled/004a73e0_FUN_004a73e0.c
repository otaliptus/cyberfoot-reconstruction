// Address: 004a73e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a73e0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  char local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  FUN_004032a8(param_1 + 0x15,0x100,0);
  *(undefined1 *)(param_1 + 0x14) = 1;
  iVar4 = FUN_004a6428(param_1);
  cVar2 = *(char *)(iVar4 + 0x461);
  if (cVar2 == '\0') {
    FUN_004a6414(param_1,2);
    uVar1 = FUN_004080c0(param_2);
    uVar3 = FUN_004a5d0c(uVar1);
    *(undefined2 *)(param_1 + 0x15) = uVar3;
  }
  else if (cVar2 == '\x02') {
    FUN_004a6414(param_1,6);
    uVar1 = FUN_004080c0(param_2);
    uVar3 = FUN_004a5d0c(uVar1);
    *(undefined2 *)(param_1 + 0x15) = uVar3;
    uVar1 = FUN_004080c4(param_2);
    uVar3 = FUN_004a5d0c(uVar1);
    *(undefined2 *)(param_1 + 0x17) = uVar3;
    uVar1 = FUN_004080c8(param_2);
    uVar3 = FUN_004a5d0c(uVar1);
    *(undefined2 *)(param_1 + 0x19) = uVar3;
  }
  else if (cVar2 == '\x03') {
    local_6 = FUN_004080c0(param_2);
    local_7 = FUN_004080c4(param_2);
    local_8 = FUN_004080c8(param_2);
    local_9 = *(char *)(iVar4 + 0x41);
    bVar5 = 0;
    do {
      cVar2 = FUN_00409658(iVar4 + 0x49 + (uint)bVar5 * 4,&local_8,3);
      if (cVar2 != '\0') break;
      bVar5 = bVar5 + 1;
      local_9 = local_9 + -1;
    } while (local_9 != '\0');
    FUN_004032a8(param_1 + 0x15,bVar5,0xff);
    FUN_004a6414(param_1,bVar5 + 1);
  }
  return;
}

