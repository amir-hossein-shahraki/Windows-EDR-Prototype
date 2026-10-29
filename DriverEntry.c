#include <ntddk.h>

VOID EDRDriverUnload(PDRIVER_OBJECT DrviverObject);

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegisteryPath)
{
	UNREFERENCED_PARAMETER(RegisteryPath);

	DbgPrint("[+] Windows EDR Prototype: Driver Load Successfully.\n");

	DriverObject->DriverUnload = EDRDriverUnload;

	return STATUS_SUCCESS;
}

VOID EDRDriverUnload(PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);

	DbgPrint("[+] Windows EDR Prototype: Driver Unload.\n");
}