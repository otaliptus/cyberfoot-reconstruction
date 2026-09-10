// Address: 004556ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004556ac(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  HMODULE hModule;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00449884(0x200);
  FUN_0045d16c(param_1,0,param_3);
  iVar1 = FUN_0047e358();
  param_1[0x9e] = iVar1;
  uVar2 = FUN_004562e4(PTR_PTR_004489f0,1,param_1);
  (**(code **)(*param_1 + 0x10c))(param_1,uVar2);
  iVar1 = param_1[0x8f];
  *(int **)(iVar1 + 0x10) = param_1;
  param_1[0xa3] = *(int *)(iVar1 + 0x14);
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0x9f] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004559a8;
  *(undefined1 *)((int)param_1 + 0x289) = 0;
  *(undefined1 *)(param_1 + 0x9b) = DAT_004557b4;
  if (DAT_0066cb2c == '\0') {
    DAT_0066cb2c = '\x01';
    hModule = GetModuleHandleA("ole32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0066cb28 = GetProcAddress(hModule,"CoInitializeEx");
    }
  }
  if (DAT_0066cb28 == (FARPROC)0x0) {
    CoInitialize((LPVOID)0x0);
  }
  else {
    (*DAT_0066cb28)();
  }
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

