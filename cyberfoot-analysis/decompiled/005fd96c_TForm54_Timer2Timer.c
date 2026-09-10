// Address: 005fd96c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm54_Timer2Timer(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 6;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005fdc89;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar4 = 0x46;
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + DAT_006d4104 * 0x130) == 9) {
    iVar4 = 0x50;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + DAT_006d4104 * 0x130) == 9) {
    iVar4 = iVar4 + 5;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d4104 * 0x130) != '\0') {
    iVar4 = iVar4 + 5;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + DAT_006d4108 * 0x130) == 1) {
    iVar4 = iVar4 + -0xf;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + DAT_006d4108 * 0x130) == 1) {
    iVar4 = iVar4 + -10;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d4108 * 0x130) != '\0') {
    iVar4 = iVar4 + -5;
  }
  FUN_0043b234(*(undefined4 *)(param_1 + 0x300),0);
  iVar2 = FUN_004032c8(100);
  if (iVar4 < iVar2 + 1) {
    uVar3 = FUN_004032c8(6);
    switch(uVar3) {
    case 0:
      FUN_00642c50(0x1d2,&local_20);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_20);
      break;
    case 1:
      FUN_00642c50(0x1d3,&local_24);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_24);
      break;
    case 2:
      uVar3 = 0x5fdbd1;
      FUN_00642c50(0x1d4,&stack0xffffffd8);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),uVar3);
      break;
    case 3:
      FUN_00642c50(0x1d2,&local_2c);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_2c);
      break;
    case 4:
      FUN_00642c50(0x1d3,&local_30);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_30);
      break;
    case 5:
      FUN_00642c50(0x1d4,&local_34);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_34);
    }
    *(undefined4 *)PTR_DAT_0066b504 = 2;
    *(int *)PTR_DAT_0066b4c8 = DAT_006d4104;
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    local_2c = 0x5fdc64;
    Sleep(2000);
    FUN_00483bc4(DAT_006d4100);
  }
  else {
    uVar3 = FUN_004032c8(6);
    switch(uVar3) {
    case 0:
      FUN_00642c50(0x1cf,&local_8);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
      break;
    case 1:
      FUN_00642c50(0x1d0,&local_c);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_c);
      break;
    case 2:
      FUN_00642c50(0x1d1,&stack0xfffffff0);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),unaff_EBX);
      break;
    case 3:
      FUN_00642c50(0x1cf,&stack0xffffffec);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),unaff_ESI);
      break;
    case 4:
      FUN_00642c50(0x1d0,&stack0xffffffe8);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),unaff_EDI);
      break;
    case 5:
      FUN_00642c50(0x1d1,&local_1c);
      FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_1c);
    }
    *(undefined4 *)PTR_DAT_0066b504 = 1;
    *(int *)PTR_DAT_0066b4c8 = DAT_006d4104;
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    local_2c = 0x5fdb46;
    Sleep(2000);
    FUN_00483bc4(DAT_006d4100);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005fdc90;
  local_20 = (undefined1 *)0x5fdc88;
  FUN_00405008(&local_34,0xc,puVar1);
  return;
}

