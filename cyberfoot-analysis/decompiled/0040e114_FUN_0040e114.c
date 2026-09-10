// Address: 0040e114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e114(undefined4 *param_1,LPCVOID param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  HINSTANCE hInstance;
  undefined *puVar4;
  undefined *puVar5;
  UINT uID;
  CHAR *lpBuffer;
  undefined1 local_45c [256];
  undefined1 *local_35c;
  undefined1 local_358;
  undefined1 *local_354;
  undefined1 local_350;
  int local_34c;
  undefined1 local_348;
  undefined *local_344;
  undefined1 local_340;
  undefined *local_33c;
  undefined1 local_338;
  _MEMORY_BASIC_INFORMATION local_334;
  CHAR local_316 [256];
  CHAR local_216 [261];
  undefined1 local_111 [261];
  int local_c;
  undefined4 local_8;
  
  local_8 = param_3;
  VirtualQuery(param_2,&local_334,0x1c);
  if (local_334.State == 0x1000) {
    DVar2 = GetModuleFileNameA(local_334.AllocationBase,local_216,0x105);
    if (DVar2 != 0) {
      local_c = (int)param_2 - (int)local_334.AllocationBase;
      goto LAB_0040e18a;
    }
  }
  GetModuleFileNameA(DAT_0066c668,local_216,0x105);
  local_c = func_0x0040e108(param_2);
LAB_0040e18a:
  iVar3 = FUN_0040f188(local_216,0x5c);
  FUN_0040a7c4(local_111,iVar3 + 1,0x104);
  puVar4 = &DAT_0040e294;
  puVar5 = &DAT_0040e294;
  cVar1 = FUN_00403c10(param_1,PTR_DAT_00408738);
  if (cVar1 != '\0') {
    puVar4 = (undefined *)FUN_00404da4(param_1[1]);
    iVar3 = FUN_0040a760(puVar4);
    if ((iVar3 != 0) && (puVar4[iVar3 + -1] != '.')) {
      puVar5 = &DAT_0040e298;
    }
  }
  iVar3 = 0x100;
  lpBuffer = local_316;
  uID = *(UINT *)(PTR_PTR_0066b730 + 4);
  hInstance = (HINSTANCE)FUN_004062b0(DAT_0066c668);
  LoadStringA(hInstance,uID,lpBuffer,iVar3);
  FUN_004039d4(*param_1,local_45c);
  local_35c = local_45c;
  local_358 = 4;
  local_354 = local_111;
  local_350 = 6;
  local_34c = local_c;
  local_348 = 5;
  local_340 = 6;
  local_338 = 6;
  local_344 = puVar4;
  local_33c = puVar5;
  FUN_0040ae24(local_8,param_4,local_316,4,&local_35c);
  FUN_0040a760(local_8);
  return;
}

