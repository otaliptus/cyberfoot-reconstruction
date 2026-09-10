// Address: 004634e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004634e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined4 *)FUN_004027fc(8);
  *puVar2 = local_8;
  uVar3 = FUN_004634b8();
  puVar2[1] = uVar3;
  cVar1 = FUN_00463484(param_1,uVar3,&local_c);
  if (cVar1 == '\0') {
    FUN_0041dec0(param_1,puVar2);
  }
  else {
    FUN_0041e098(param_1,local_c,puVar2);
  }
  return;
}

